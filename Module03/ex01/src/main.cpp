/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/09/29 10:46:41 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
    ClapTrap c = ClapTrap("Clap");
    ScavTrap s = ScavTrap("Scav");

    std::cout << "Clap attack :" << std::endl;
    for (int i = 0; i < 11; i++)
        c.attack("Nas");
    
    std::cout << std::endl << "Scav attack :" << std::endl;
    for (int i = 0; i < 51; i++)
        s.attack("Tag");
    
    std::cout << std::endl << "Repaired :" << std::endl;
    for (int i = 0; i < 2; i++) {     
        s.beRepaired(5);
        c.beRepaired(10);
    }
    
    s.guardGate();
    
    return 0;
}