/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:17:41 by nas               #+#    #+#             */
/*   Updated: 2025/08/20 12:31:13 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "../include/Fixed.hpp"

class Point {
  
    public :
    
        Point();
        Point(const Point &other);
        Point& operator=(const Point &other);
        ~Point();
        
        Point(float f1, float f2);
        
            

    private :
    
        Fixed const x;
        Fixed const y;

};

#endif