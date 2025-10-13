/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:50:46 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/13 19:22:21 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename F> 
void iter(T* array, const size_t size, F function)
{
    for (size_t i = 0; i < size; i++)
        function(array[i]);
}

#endif