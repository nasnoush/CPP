/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:25 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/05 15:49:55 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)	
		_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incr_grade()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decr_grade()
{
	if ((_grade + 1 > 150))
		throw GradeTooLowException();
	_grade += 1;
}

std::ostream& operator<<(std::ostream& flux, const Bureaucrat& b)
{
	flux << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return flux;
}


void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << getName() << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{	
		std::cout << getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
	
}
