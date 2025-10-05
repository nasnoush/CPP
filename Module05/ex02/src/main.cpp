/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/05 15:57:37 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));
	std::cout << "Test 1 : Fonctionne" << std::endl;
	Bureaucrat c = Bureaucrat("Nas", 43);
	
	AForm *f = new RobotomyRequestForm("Contrat");
	AForm *a = new PresidentialPardonForm("President");
	AForm *s = new ShrubberyCreationForm("Arbre");
	
	c.signForm(*f);
	c.signForm(*a);
	c.signForm(*s);

	c.executeForm(*f);
	c.executeForm(*a);
	c.executeForm(*s);

	return 0;
}