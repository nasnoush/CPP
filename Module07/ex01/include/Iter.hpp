/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:50:46 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/19 12:11:25 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>


template<typename T>
void	iter(T *array, size_t size, void (*function)(T &e))
{
	for(size_t i = 0; i < size; i++)
		function(array[i]);
}

template<typename T>
void	iter(const T *array, size_t size, void (*function)(const T &e))
{
	for(size_t i = 0; i < size; i++)
		function(array[i]);
}

template <typename T>
void test(T &e)
{
    std::cout << e << std::endl;
}

template <typename T>
void test(const T &e)
{
    std::cout << e << std::endl;
}

#endif