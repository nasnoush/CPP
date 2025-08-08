/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:52:58 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 13:52:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (0);
	Zombie *Z = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Z[i].setName(name);
		std::cout << name << std::endl;
	}

	return Z;
}
