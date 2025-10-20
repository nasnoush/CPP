/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:07:12 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/20 13:50:50 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm> 
#include <iostream>
#include <vector>
#include <list>
#include <deque>


template <typename T>
typename T::iterator	easyfind(T &a, int i)
{
	typename T::iterator j = std::find(a.begin(), a.end(), i);
	if (j == a.end())
		throw std::logic_error("Aucune occurence trouvée");
	else
		std::cout << "Trouvé a la " << std::distance(a.begin(), j) << "e place.." << std::endl;	
	 return j;
}


#endif