/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:24 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/07 11:05:58 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int main ()
{
	char c = 'a';
	int i = static_cast<int>(c);
	std::cout << i << std::endl;

	int d = 42;
	double dd = static_cast<double>(d);
	std::cout << dd << std::endl;

	int w = 97;
	char ch = static_cast<char>(w);
	std::cout << ch << std::endl;
	
	int p = 97;
	float pp = static_cast<char>(p);
	std::cout << pp << std::endl;
	
	float f = 42.65f;
	int toin = static_cast<int>(f);
	std::cout << toin << std::endl;
	
	std::cout << std::endl;
	
	std::string test;
	char m = 'a';
	
	test = m;
	std::cout << test << std::endl;
	
	
	return (0);
}