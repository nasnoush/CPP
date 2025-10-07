/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:36 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/07 11:17:02 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{

}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	
}

ScalarConverter::~ScalarConverter()
{
	
}

static void	ScalarConverter::toChar(std::string value)
{
	
	if ((value >= '\t' && value <= '\r') || value == ' ')
		std::cout << "Char : Non displayable" << std::endl;
	else
	{
		std::cout << "Char : " << value << std::endl;
	}
}

static void ScalarConverter::convert(std::string value)
{		

}