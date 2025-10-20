/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:50:35 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/20 08:34:02 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Iter.hpp"

	
void test2(int &x)
{
    x = 5 + x;
}

void test3(std::string &s)
{
    s = "zero";
}

int main ()
{
    std::cout << "Test addition tableau" << std::endl;
    int array[5] = {10, 20, 30, 40, 50};
    iter(array, 3, test2);
    for (int i = 0; i < 5; i++)
        std::cout << array[i] << std::endl;
    
    std::cout << std::endl;
    std::cout << "Test tableau const" << std::endl;
    const std::string t[5] = {"un", "deux", "trois", "quqtre", "cinq"};
    iter(t, 3, test);	
    for (int i = 0; i < 5; i++)
        std::cout << t[i] << std::endl;
    
    std::cout << std::endl;
    std::cout << "Test modif tableau simple" << std::endl;
    std::string tab[5] = {"A", "B", "C", "D", "E"};
    iter(tab, 3, test3);
	for (int i = 0; i < 5; i++)
        std::cout << tab[i] << std::endl;

    return 0;
}