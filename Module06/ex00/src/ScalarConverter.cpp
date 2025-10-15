/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:36 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/15 13:56:24 by nadahman         ###   ########.fr       */
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

void	ScalarConverter::toChar(double d)
{
	if (d < 0.0 || d > 127.0 || std::isnan(d) || std::isinf(d))
	{
		std::cout << "char : impossible" << std::endl;
		return ;
	}
	
	int i = static_cast<int>(d); // d abord int pour eviter les comportements chelou apres
	char c = static_cast<char>(i);
	
	if (std::isprint(static_cast<char>(c)))
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::toInt(double d)
{
	if (d < INT_MIN || d > INT_MAX || std::isnan(d) || std::isinf(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
}

void	ScalarConverter::toFloat(double d)
{
	float f = static_cast<float>(d);
	if (std::isnan(d))
		std::cout << "float: nanf" << std::endl;
	else if (std::isinf(d))
		if (d < 0)
			std::cout << "float: -inff" << std::endl;
		else
			std::cout << "float: +inff" << std::endl;
	else
		if (f == static_cast<int>(f))
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;

}

void	ScalarConverter::toDouble(double d)
{
	if (std::isnan(d))
		std::cout << "double: nan" << std::endl;
	else if (std::isinf(d))
		if (d < 0)
			std::cout << "double: -inf" << std::endl;
		else
			std::cout << "double: +inf" << std::endl;
	else
		if (d == static_cast<long long>(d))
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d  << std::endl;

}

void	ScalarConverter::convert(std::string value)
{
	if (value.length() == 1 && !std::isdigit(static_cast<char>(value[0])))
	{
		char c = value[0];
		double d = static_cast<double>(c);
		toChar(d);
		toInt(d);
		toFloat(d);
		toDouble(d);
		return ;
	}
	
	if (value == "nan" || value == "+inf" || value == "-inf" ||
		value == "nanf" || value == "+inff" || value == "-inff")
	{
		if (value == "nanf" || value == "nan")
			std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
		else if (value == "+inff" || value == "+inf")
			std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
		else
			std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
		return;
	}
	
	if (value.size() > 1 && value[value.size() - 1] == 'f' && value.find('.') != std::string::npos)
		value.erase(value.size() - 1);
		
	std::istringstream iss(value);
	double d;
	iss >> d;
	
	if (iss.fail() || !iss.eof())
	{
		std::cout 	<< "char: impossible\n" << "int: impossible\n" << "float: impossible\n" << "double: impossible\n";
		return;
	}
	
	toChar(d);
	toInt(d);
	toFloat(d);
	toDouble(d);
		
}



