/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:07:15 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/13 10:44:25 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T> void swap(T &a, T &b)
{
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T a, T b)
{
	if (a >= b)
		return b;
	else
		return a;
}

template <typename T> T max(T a, T b)
{
	if (a <= b)
		return b;
	else
		return a;
}

#endif