/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:12:44 by nas               #+#    #+#             */
/*   Updated: 2025/08/13 14:12:44 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{	
		std::cout << "Pas le bon nombre d'argument.." << std::endl;
		return (0);
	}
	// ouvrir le fichier av[1]
	std::ifstream file;

	file.open(av[1], std::ios::binary);

	if (!file)
		std::cout << "Impossible d'ouvrir le fichier.." << std::endl;
	else
	{
		// lire le fichier
		std::string str_modif((std::istreambuf_iterator<char>(file)),
                       std::istreambuf_iterator<char>());

		file.close();

		std::string str_final = replace_str(str_modif, av[2], av[3]);	

		std::string out_filename = std::string(av[1]) + ".replace";

    	std::ofstream outfile(out_filename.c_str(), std::ios::binary | std::ios::trunc);
    	if (!outfile)
    	{
        	std::cout << "Impossible de créer le fichier de sortie.." << std::endl;
        	return 1;
		}

    	outfile << str_final;
    	outfile.close();

	}
	return (0);
}

