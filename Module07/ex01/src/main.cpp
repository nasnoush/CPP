/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:50:35 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/13 19:45:05 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Iter.hpp"


int	test(int x) 
{
	std::cout << "Test de Fonction int" << std::endl;
	return (5 + x);
}
	
void test2(int &x)
{
    x = 5 + x;
}

std::string test3(std::string &s)
{
    s = "Salut";
    return s;
}

void test4(const std::string &s)
{
    std::cout << "Test 4 : "<< s << std::endl;
}

int main ()
{
	int array[5] = {0, 0, 0, 0, 0};
    int size = 3;
    
    std::string t[5] = {"", "", "", "", ""};
    int size2 = 4;
    
    const std::string tab[5];
    int size3 = 4;
	
    iter(array, size, test2);
    
    iter(t, size2, test3);
    
    iter(tab, size3, test4);
	
    for (int i = 0; i < size; i++)
        std::cout << array[i] << std::endl;
        
    for (int i = 0; i < size2; i++)
        std::cout << t[i] << std::endl;


    return 0;
}