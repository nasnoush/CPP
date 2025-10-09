/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:20 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/09 11:50:35 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>


class ScalarConverter {

	public :
		static void	convert(std::string value);
		
		static void	toChar(std::string value);
		static void	toInt(std::string value);
		static void	toFloat(std::string value);
		static void	toDouble(std::string value);
		
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

	private :
		// ScalarConverter();
		// ScalarConverter(const ScalarConverter& other);
		// ScalarConverter& operator=(const ScalarConverter& other);
		// ~ScalarConverter();
};

#endif