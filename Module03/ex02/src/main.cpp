/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/08/24 12:40:33 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main()
{
    std::cout << "--- Création des robots ---" << std::endl;
    ClapTrap alpha("Alpha");
    FragTrap beta("Beta");

    std::cout << "\n--- Tests d'attaques ---" << std::endl;
    alpha.attack("Target1");
    alpha.attack("Target2");

    beta.attack("Target1");
    beta.attack("Target2");

    std::cout << "\n--- Tests de réparation ---" << std::endl;
    alpha.beRepaired(5);
    beta.beRepaired(10);

    std::cout << "\n--- Test capacité spéciale FragTrap ---" << std::endl;
    beta.highFivesGuys();

    std::cout << "\n--- Épuisement d'énergie ---" << std::endl;
    // Faire attaquer beta jusqu'à épuisement de son énergie
    for (int i = 0; i < 105; ++i)
        beta.attack("TargetX");

    std::cout << "\n--- Fin du programme ---" << std::endl;
    return 0;
}
