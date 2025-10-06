/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:46:14 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/06 12:49:52 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"



Intern::Intern()
{

}

// Intern::Intern(const Intern &other)
// {

// }

// Intern& Intern::operator=(const Intern& other)
// {
	
// }

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


AForm* Intern::makeForm(std::string FormName, std::string FormTarget)
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
	{	
		std::cout << "Error : Nom de Form introuvable !" << std::endl;
		return (NULL);
	}
	
	try
	{
		Createfonct[pos](FormTarget);
		std::cout << "Intern creates " << FormTarget << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << FormName << "n'a pas pu etre cree " << e.what() << std::endl;
	}
	
	
	return (Createfonct[pos](FormTarget));
}