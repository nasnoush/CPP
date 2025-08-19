/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:30:39 by nas               #+#    #+#             */
/*   Updated: 2025/08/19 15:15:36 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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