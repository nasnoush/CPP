/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/04 12:27:13 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
	std::cout << "Test 1 : Fonctionne" << std::endl;
	try {
		Bureaucrat b1("Alice", 42);
		Form f1("Contrat", 50, 25);
		
		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;
		
		b1.signForm(f1);
		std::cout << "Form signed ? " << f1.getIsSigned() << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nTest 2 : Bureaucrat grade trop haut" << std::endl;
	try {
		Bureaucrat b2("Bob", 0);
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nTest 3 : Bureaucrat grade trop bas" << std::endl;
	try {
		Bureaucrat b3("Charlie", 200);
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nTest 4 : Form invalide" << std::endl;
	try {
		Form f2("InvalidForm", 0, 10);
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Form f3("InvalidForm2", 151, 10);
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nTest 5 : SignForm échoue" << std::endl;
	try {
		Bureaucrat b4("David", 120);
		Form f4("Bulletin", 50, 20);
		
		std::cout << b4 << std::endl;
		std::cout << f4 << std::endl;
		
		b4.signForm(f4);
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\nTest 6 : incr/decr" << std::endl;
	try {
		Bureaucrat b5("Emma", 2);
		
		std::cout << b5 << std::endl;
		
		b5.incr_grade();
		
		std::cout << b5 << std::endl;

		b5.incr_grade();
		
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b6("Frank", 149);
		
		std::cout << b6 << std::endl;
		
		b6.decr_grade();
		
		std::cout << b6 << std::endl;
		
		b6.decr_grade();
		
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}