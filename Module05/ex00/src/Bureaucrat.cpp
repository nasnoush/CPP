/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:25 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/18 10:58:32 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "";
	_grade = 0;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	_name = name;
	_grade = grade;
	
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	_name = other._name;
	_grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName()
{
	return _name;
}

int	Bureaucrat::getGrade()
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



