/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:07:05 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/13 10:39:22 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Whatever.hpp"


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