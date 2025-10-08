/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/08 11:09:21 by nadahman         ###   ########.fr       */
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
	try
	{
		srand(time(NULL));

		Intern someRandomIntern;
		Bureaucrat b = Bureaucrat("Boss", 1);
	
		AForm* rrf;
		AForm* pr;
		AForm* sh;
		
		sh = someRandomIntern.makeForm("shrubbery creation", "test");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		pr = someRandomIntern.makeForm("presidential pardon", "President");

		
		b.signForm(*rrf);
		b.executeForm(*rrf);
		std::cout << std::endl;
		
		b.signForm(*pr);
		b.executeForm(*pr);
		std::cout << std::endl;
		
		b.signForm(*sh);
		b.executeForm(*sh);
		std::cout << std::endl;
		
		delete rrf;
		delete pr;
		delete sh;
		
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	return 0;
}