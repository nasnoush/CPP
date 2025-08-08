/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:24:09 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 14:24:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"


int main()
{
	int N = 4;
	Zombie *z = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		z[i].announce();

	delete[] z;

	return (0);
}