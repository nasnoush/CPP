/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:19:23 by marvin            #+#    #+#             */
/*   Updated: 2025/08/10 16:19:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

int main(int ac, char **av)
{
	if (ac > 4)
	{	
		std::cout << "Pas le bon nombre d'argument.." << std::endl;
		return (0);
	}
	// ouvrir le fichier av[1]
	std::fstream file;

	file.open(av[1]);

	if (!file)
		std::cout << "Impossible d'ouvrir le fichier.." << std::endl;
	else
	{
		// lire le fichier

		// fonction pour remplacer av[2] par av[3]
	}


	// cree le nouveau fichier avec le nouveau contenu	

	file.close();

	return (0);
}

