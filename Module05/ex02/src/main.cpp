/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/08 10:18:31 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include <ctime>


int main()
{
	srand(time(NULL));
	std::cout << "Test 1 : " << std::endl;
	Bureaucrat c = Bureaucrat("Nas", 42);
	
	AForm *f = new RobotomyRequestForm("Contrat");
	AForm *a = new PresidentialPardonForm("President");
	AForm *s = new ShrubberyCreationForm("Arbre");
	
	c.signForm(*f);
	c.signForm(*a);
	c.signForm(*s);

	c.executeForm(*f);
	c.executeForm(*a);
	c.executeForm(*s);
	
	delete f;
	delete a;
	delete s;

	std::cout << std::endl;
	std::cout << "Test 2 : " << std::endl;
	
	try
	{
		Bureaucrat b = Bureaucrat("Boss", 45);
		
		AForm *ro = new RobotomyRequestForm("Robot"); // 72 et 45
		AForm *pr = new PresidentialPardonForm("President"); // 25 et 5
		AForm *sh = new ShrubberyCreationForm("Arbre"); // 145 et 137
		
		b.signForm(*ro);
		b.executeForm(*ro);
		std::cout << std::endl;
		b.signForm(*pr);
		b.executeForm(*pr);
		std::cout << std::endl;
		b.signForm(*sh);
		b.executeForm(*sh);
		
		delete ro;
		delete pr;
		delete sh;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}