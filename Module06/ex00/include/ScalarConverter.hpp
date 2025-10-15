/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:02:20 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/13 09:58:06 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <cmath>
#include <limits.h>


class ScalarConverter {

	public :
		static void	convert(std::string value);
		
		static void	toChar(double d);
		static void	toInt(double d);
		static void	toFloat(double d);
		static void	toDouble(double d);

	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
};

#endif