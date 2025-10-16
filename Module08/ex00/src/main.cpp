/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:23:59 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/16 13:55:15 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/EasyFind.hpp"

int main()
{
	std::cout << "Test avec vector :" << std::endl;
	try
	{
		int i = 30;
		std::vector<int> value;
		value.push_back(10);
		value.push_back(20);
		value.push_back(30);
		value.push_back(40);
	
		easyfind(value, i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int a = 40;
		std::vector<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);
		
		easyfind(v, a);
		v.pop_back();
		easyfind(v, a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "Test avec list et deque :" << std::endl;
	try
	{
		int i = 20;
		std::list<int> pile;
		pile.push_back(10);
		pile.push_back(20);
		pile.push_back(30);
		pile.push_back(40);
	
		easyfind(pile, i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int a = 65;
		std::deque<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);
		
		easyfind(v, a);
		v.pop_back();
		easyfind(v, a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}