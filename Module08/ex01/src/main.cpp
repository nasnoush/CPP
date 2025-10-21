/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:59:55 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/21 15:23:23 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <iterator>

// int main()
// {
//     try
//     {
//         Span sp = Span(5);
    
//         sp.addNumber(10);
//         sp.addNumber(21);
//         sp.addNumber(1);
//         sp.addNumber(6);
//         sp.addNumber(50);
//         // sp.addNumber(60);
    
//         std::cout << sp << std::endl;
//         sp.shortestSpan();
        
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
    
//     return (0);
// }

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    sp.shortestSpan();
    // sp.longestSpan();
    
    return (0);
}