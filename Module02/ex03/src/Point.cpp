/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:17:36 by nas               #+#    #+#             */
/*   Updated: 2025/08/21 12:51:34 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point() : x(0), y(0) 
{
    
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{

}

Point::~Point()
{

}

Point::Point(float f1, float f2) : x(f1), y(f2)
{
    
}

const Fixed&  Point::getX() const
{
    return x;
}

const Fixed&   Point::getY() const
{
    return y;
}