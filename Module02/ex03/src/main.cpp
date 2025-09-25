/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:17:34 by nas               #+#    #+#             */
/*   Updated: 2025/09/25 10:05:00 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"


int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point dedans(5, 5);
    Point cote(5, 0);
    Point sommet(0, 0);
    Point dehors(10, 11);

    std::cout << "point dedans : " << bsp(a, b, c, dedans) << std::endl;
    std::cout << "point cote : " << bsp(a, b, c, cote) << std::endl;
    std::cout << "point sommet : " << bsp(a, b, c, sommet) << std::endl;
    std::cout << "point dehors : " << bsp(a, b, c, dehors) << std::endl;

    return 0;
}
