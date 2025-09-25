/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/24 13:15:46 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
	std::cout << "Test 1" << std::endl;
	try
	{
		Bureaucrat a = Bureaucrat("Nas", 42);
		std::cout << a << std::endl;
		
		Bureaucrat c = Bureaucrat("Bob", 151);
		std::cout << c << std::endl;
		
		a.incr_grade();
		
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Test 2" << std::endl;
	try
	{
		Bureaucrat n = Bureaucrat("Al", 148);
		std::cout << n << std::endl;
		
		n.decr_grade();
		std::cout << n << std::endl;
		n.decr_grade();
		std::cout << n << std::endl;
		n.decr_grade();
		std::cout << n << std::endl;
	
		std::cout << "Ici" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Test 3" << std::endl;
	try
	{
		Bureaucrat v = Bureaucrat("Ev", 5);
		std::cout << v << std::endl;
		
		v.incr_grade();
		std::cout << v << std::endl;
		v.incr_grade();
		std::cout << v << std::endl;
		v.incr_grade();
		std::cout << v << std::endl;
		v.incr_grade();
		std::cout << v << std::endl;
		v.incr_grade();
		std::cout << v << std::endl;
	
		std::cout << "Ici" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}