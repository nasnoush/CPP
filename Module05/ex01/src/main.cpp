/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/24 11:47:17 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
	std::cout << "Test 1" << std::endl;
	
	Bureaucrat c = Bureaucrat("Nas", 42);
	// Form contrat = Form("contrat", 50, 25);
	
	std::cout << c << std::endl;
	// std::cout << contrat << std::endl;
	
	// c.signForm(contrat);
	
	return 0;
}