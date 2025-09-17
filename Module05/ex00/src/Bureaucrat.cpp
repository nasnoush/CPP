/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:25 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/17 14:16:51 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "";
	_grade = 0;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	_grade = grade;
	
	try
	{
		if (!(grade >= 1 && grade <= 150))
		{
			throw "Impossible d'atteindre ce grade !";
		}
	}
	catch (const char *err)
	{
		std::cerr << _name << " bureaucrat grade: " << err << std::endl;
	}
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
	_grade -= 1;
	try
	{
		if (_grade < 1)
		{
			throw "Impossible d'atteindre ce grade !";
		}
	}
	catch (const char *err)
	{
		std::cerr << "Error : " << err << std::endl;
	}
}

void	Bureaucrat::decr_grade()
{
	_grade += 1;
	try
	{
		if ((_grade > 150))
		{
			throw "Impossible d'atteindre ce grade !";
		}
	}
	catch (const char *err)
	{
		std::cerr << "Error : " << err << std::endl;
	}
}



