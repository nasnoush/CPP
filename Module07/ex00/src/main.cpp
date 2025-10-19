/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:06:26 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/19 11:25:43 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Whatever.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Avec int : " << std::endl;
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	
	std::cout << std::endl << "Avec string : " << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	
	std::cout << std::endl << "Avec double : " << std::endl;
	double e = 42.2;
	double i = 17.9;
	::swap(e, i);
	std::cout << "e = " << e << ", i = " << i << std::endl;
	std::cout << "min( e, i ) = " << ::min(e, i) << std::endl;
	std::cout << "max( e, i ) = " << ::max(e, i) << std::endl;
	
	std::cout << std::endl << "Avec float : " << std::endl;
	float f = 1.2f;
	float g = 1.9f;
	::swap(f, g);
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << "min( f, g ) = " << ::min(f, g) << std::endl;
	std::cout << "max( f, g ) = " << ::max(f, g) << std::endl;

	return 0;
}