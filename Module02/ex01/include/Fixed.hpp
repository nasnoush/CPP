/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:30:39 by nas               #+#    #+#             */
/*   Updated: 2025/09/16 12:36:58 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    public :

        Fixed();
        Fixed(const int entier);
        Fixed(const float flotant);
        
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed &other);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);    
        
        float toFloat(void) const;
        int toInt(void) const;
        
        ~Fixed();
        
    private :
    
        int fixed_p;
        static const int fract_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);


#endif