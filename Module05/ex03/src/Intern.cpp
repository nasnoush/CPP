/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:46:14 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/08 11:06:45 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"



Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{

}

AForm* Intern::createRobo(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createPres(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::createShru(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

const std::string Intern::Name[3] =
{
	"robotomy request", "presidential pardon", "shrubbery creation"
};

const Intern::f Intern::Createfonct[3] =
{
	&Intern::createRobo,
	&Intern::createPres,
	&Intern::createShru
};

AForm* Intern::makeForm(std::string const &FormName, std::string const &FormTarget)
{
	int pos = -1;
	
	for (int i = 0; i < 3; i++)
	{
		if (FormName == Name[i])
		{
			pos = i;
			break;
		}
	}
	
	if (pos == -1)
		throw WrongNameForm();
	
	AForm *f = Createfonct[pos](FormTarget);
	
	std::cout << "Intern creates " << Name[pos] << std::endl;
	
	return (f);
}