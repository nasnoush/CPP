/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/06 13:49:25 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"
#include <ctime>


int main()
{
	srand(time(NULL));

	Intern someRandomIntern;
	Bureaucrat b = Bureaucrat("Boss", 1);
	
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	b.signForm(*rrf);
	std::cout << std::endl;
	
	AForm* Yan;
	Yan = someRandomIntern.makeForm("presidential pardon", "contrat");
	b.signForm(*Yan);
	std::cout << std::endl;
	
	AForm* nas;
	nas = someRandomIntern.makeForm("shrubbery creation", "arbuste");
	b.signForm(*nas);
	std::cout << std::endl;
	
	b.executeForm(*rrf);
	std::cout << std::endl;
	b.executeForm(*Yan);
	std::cout << std::endl;
	b.executeForm(*nas);
	

	
	return 0;
}