/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/02 11:32:02 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
	std::cout << "Test 1" << std::endl;
	
	Bureaucrat c = Bureaucrat("Nas", 12);
	Form contrat = Form("Contrat", 50, 25);
	
	std::cout << c << std::endl;
	std::cout << contrat << std::endl;
	
	c.signForm(contrat);
	
	std::cout << std::endl;
	std::cout << "Test 2 : Grade pour signer trop haut" << std::endl;
	
	try
	{
		Bureaucrat n = Bureaucrat("Mei", 120);
		Form f = Form("Bulletin", 5, 1);
		
		std::cout << n << std::endl;
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	
	return 0;
}