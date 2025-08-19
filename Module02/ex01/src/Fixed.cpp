/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:30:41 by nas               #+#    #+#             */
/*   Updated: 2025/08/19 15:15:44 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_p = 0;
}

Fixed::Fixed(const int entier)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_p = entier << fract_bits;
}

Fixed::Fixed(const float flotant)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_p = (int)roundf(flotant * (1 << fract_bits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    if (this != &other)
        fixed_p = other.fixed_p;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_p;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_p = raw;
}

float Fixed::toFloat() const
{
    return (float)fixed_p / (1 << fract_bits);
}

int Fixed::toInt() const 
{
    return (fixed_p >> fract_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& value)
{
    out << value.toFloat();
    return out;
}
