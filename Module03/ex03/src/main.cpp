/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/08/24 14:02:38 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int main()
{
    std::cout << "--- Création des robots ---" << std::endl;
    ClapTrap alpha("Alpha");
    ScavTrap beta("Beta");
    FragTrap gamma("Gamma");
    DiamondTrap delta("Delta");

    std::cout << "\n--- Tests d'attaques ---" << std::endl;
    alpha.attack("Target1");
    alpha.attack("Target2");

    beta.attack("Target1");
    beta.attack("Target2");

    gamma.attack("Target1");
    gamma.attack("Target2");

    delta.attack("Target1"); // doit utiliser ScavTrap::attack
    delta.attack("Target2");

    std::cout << "\n--- Tests de réparation ---" << std::endl;
    alpha.beRepaired(5);
    beta.beRepaired(10);
    gamma.beRepaired(15);
    delta.beRepaired(20);

    std::cout << "\n--- Test capacités spéciales ---" << std::endl;
    gamma.highFivesGuys();
    beta.guardGate();
    delta.highFivesGuys();
    delta.whoAmI();

    std::cout << "\n--- Épuisement d'énergie ---" << std::endl;
    for (int i = 0; i < 15; ++i)
        beta.attack("TargetX");

    for (int i = 0; i < 20; ++i)
        delta.attack("TargetY");

    std::cout << "\n--- Fin du programme ---" << std::endl;
    return 0;
}