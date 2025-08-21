/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:17:41 by nas               #+#    #+#             */
/*   Updated: 2025/08/21 12:49:55 by nas              ###   ########.fr       */
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
        ~Point();
        
        Point(float f1, float f2);
        
        const Fixed&  getX() const;
        const Fixed&  getY() const;
        

    private :
    
        Point& operator=(const Point &other);
        Fixed const x;
        Fixed const y;

};


bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif