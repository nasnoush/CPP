/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/09/29 10:20:33 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
    ClapTrap c = ClapTrap("Nas");
    
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    
    c.beRepaired(5);
    c.beRepaired(5);
    
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    c.attack("Bob");
    

    return (0);
}