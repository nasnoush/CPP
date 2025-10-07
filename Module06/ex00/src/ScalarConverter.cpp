/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:36 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/07 13:56:38 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	
}

void	ScalarConverter::toChar(std::string value)
{
	if (value.empty())
	{	
		std::cout << "Char : Non displayable" << std::endl;
		return ;
	}
	char a = value[0];
	if ((a >= '\t' && a <= '\r') || a == ' ')
		std::cout << "Char : Non displayable" << std::endl;
	else
	{
		std::cout << "Char : " << a << std::endl;
	}
}

void	ScalarConverter::toInt(std::string value)
{
	if (value.empty())
	{	
		std::cout << "Char : Non displayable" << std::endl;
		return ;
	}
	
}

// static void ScalarConverter::convert(std::string value)
// {		

// }