/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:07:12 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/15 11:27:41 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm> 
#include <iostream>
#include <vector>

template <typename T>
void	easyfind(T a, int i)
{
	for (unsigned long j = 0; j < a.size(); j++)
	{
		if (a[j] == i)
		{	
			std::cout << "Trouvé a la " << j << "e place.." << std::endl;
			return ;
		}
	}
	throw std::logic_error("Aucune occurence trouvé");
}


#endif