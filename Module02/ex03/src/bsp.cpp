/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:17:29 by nas               #+#    #+#             */
/*   Updated: 2025/08/21 12:29:22 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

static  Fixed aire(Point const &a, Point const &b, Point const &c)
{
    float xa = a.getX().toFloat();
    float ya = a.getY().toFloat();
    
    float xb = b.getX().toFloat();
    float yb = b.getY().toFloat();

    float xc = c.getX().toFloat();
    float yc = c.getY().toFloat();

    float aire = (xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb)) / 2;
    
    if (aire < 0)
        aire = -aire;
    
    return aire;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed aire_ABC = aire(a, b, c);
    
    Fixed aire_PAB = aire(point, a, b);
    Fixed aire_PBC = aire(point, b, c);
    Fixed aire_PCA = aire(point, c, a);
    
    Fixed sommes_aire = aire_PAB + aire_PBC + aire_PCA;
    
    if (aire_ABC == sommes_aire && aire_PAB > Fixed(0) && aire_PBC > Fixed(0) && aire_PCA > Fixed(0))
        return true;
    else
        return false; 
}