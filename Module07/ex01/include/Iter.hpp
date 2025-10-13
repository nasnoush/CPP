/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:50:46 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/13 13:28:07 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename F> 
void iter(T* array, const int size, F function)
{
    for (int i = 0; i < size; i++)
        array[i] = function;
}

#endif