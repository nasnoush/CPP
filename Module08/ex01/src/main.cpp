/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:59:55 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/21 08:53:40 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
    
        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
        sp.addNumber(40);
        sp.addNumber(50);
        sp.addNumber(60);
    
        std::cout << sp << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return (0);
}