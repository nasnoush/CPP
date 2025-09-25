/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:19:42 by nas               #+#    #+#             */
/*   Updated: 2025/09/25 10:28:30 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) 
{
    // std::cout << "Test 1 :" << std::endl;
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    
    // std::cout << std::endl;
    std::cout << "Test 2 :" << std::endl;
    
    Fixed a;
    Fixed b(5.05f);
    Fixed c(2);
    Fixed d;
    
    std::cout << "Operation :" << std::endl;
    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "b - c = " << b - c << std::endl;
    std::cout << "b * c = " << b * c << std::endl;
    std::cout << "b / c = " << b / c << std::endl;
    
    std::cout << std::endl << "Incr / Decr :" << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "--a = " << --a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    
    std::cout << std::endl << "Comparaison :" << std::endl;
    std::cout << "b > c ? " << (b > c) << std::endl;
    std::cout << "b < c ? " << (b < c) << std::endl;
    std::cout << "b <= c ? " << (b <= c) << std::endl;
    std::cout << "b >= c ? " << (b >= c) << std::endl;
    std::cout << "b == c ? " << (b == c) << std::endl;
    std::cout << "b != c ? " << (b != c) << std::endl;
    
    std::cout << std::endl << "Min / MAx :" << std::endl;
    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
    
    std::cout << std::endl << "Conversion :" << std::endl;
    std::cout << "b en INT = " << b.toInt() << std::endl;
    std::cout << "b en float = " << b.toFloat() << std::endl;
    
    return 0;
}