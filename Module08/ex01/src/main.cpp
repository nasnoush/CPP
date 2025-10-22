/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:59:55 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/22 12:57:20 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


int main()
{
    try
    {
        srand(time(0));
        Span sp = Span(10);
    

        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
    
        sp.addMultNbr(10);
        std::cout << sp << std::endl;
    
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;;
    }
        catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return (0);
}