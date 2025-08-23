/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/08/23 20:29:10 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
    std::cout << "\n--- Création des robots ---\n" << std::endl;
    ClapTrap alpha("Alpha");
    ScavTrap beta("Beta");

    std::cout << "\n--- Tests d'attaques ---\n" << std::endl;
    alpha.attack("Target1");       
    alpha.attack("Target2");
    beta.attack("Target1"); 
    beta.attack("Target2");

    std::cout << "\n--- Tests de réparation ---\n" << std::endl;
    alpha.beRepaired(5);
    beta.beRepaired(10);

    std::cout << "\n--- Test capacité spéciale ScavTrap ---\n" << std::endl;
    beta.guardGate();

    std::cout << "\n--- Épuisement d'énergie ---\n" << std::endl;
    for (int i = 0; i < 55; i++)
        beta.attack("TargetX");

    std::cout << "\n--- Fin du programme ---\n" << std::endl;

    return 0;
}