/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:17:32 by nas               #+#    #+#             */
/*   Updated: 2025/08/21 12:52:34 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
    fixed_p = 0;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::Fixed(const int entier)
{
    fixed_p = entier << fract_bits;
}

Fixed::Fixed(const float flotant)
{
    fixed_p = (int)roundf(flotant * (1 << fract_bits));
}

Fixed::~Fixed()
{
    
}


Fixed& Fixed::operator=(const Fixed &other)
{   
    if (this != &other)
        fixed_p = other.fixed_p;
    return *this;
}

int Fixed::getRawBits() const
{
    return fixed_p;
}

void Fixed::setRawBits(int const raw)
{
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

bool    Fixed::operator>(const Fixed &other) const
{
    return fixed_p > other.fixed_p;
}

bool    Fixed::operator<(const Fixed &other) const
{
    return fixed_p < other.fixed_p;
}

bool    Fixed::operator<=(const Fixed &other) const
{
    return fixed_p <= other.fixed_p;
}

bool    Fixed::operator>=(const Fixed &other) const
{
    return fixed_p >= other.fixed_p;    
}

bool    Fixed::operator==(const Fixed &other) const
{
    return fixed_p == other.fixed_p;
}

bool    Fixed::operator!=(const Fixed &other) const
{
    return fixed_p != other.fixed_p;
}

Fixed   Fixed::operator+(const Fixed &other) const
{
    Fixed n;
    
    n.fixed_p = (this->fixed_p + other.fixed_p);
    return n;
}

Fixed   Fixed::operator-(const Fixed &other) const
{
    Fixed n;
    
    n.fixed_p = (this->fixed_p - other.fixed_p);
    return n;
}

Fixed   Fixed::operator*(const Fixed &other) const
{
    Fixed n;
    
    n.fixed_p = (this->fixed_p * other.fixed_p) >> fract_bits;
    return n;
}

Fixed   Fixed::operator/(const Fixed &other) const
{
    Fixed n;
    
    n.fixed_p = (this->fixed_p << fract_bits) / other.fixed_p;
    return n;
}

Fixed& Fixed::operator++()
{
    this->fixed_p += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    
    this->fixed_p += 1;
    return (tmp);
}

Fixed& Fixed::operator--()
{
    this->fixed_p -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    
    this->fixed_p -= 1;
    return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a <= b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a <= b)
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a >= b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a >= b)
        return a;
    else
        return b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}
