/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:50:35 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/13 13:29:22 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Iter.hpp"


int	test(void) 
{
	std::cout << "Test de Fonction int" << std::endl;
	return (1);
}
	


// void	iterbis(int *array, const int size, int (*f)(void))
// {
// 	for (int i = 0; i < size; i++)
// 		array[i] = f();
// }

int main ()
{
	int array[5];
    int size = 3;
	
    iter(array, size, test);
	
    for (int i = 0; i < size; i++)
        std::cout << array[i] << std::endl;

    return 0;
}