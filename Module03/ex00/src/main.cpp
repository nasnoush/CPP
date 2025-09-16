/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/09/16 12:39:56 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
    ClapTrap c = ClapTrap("Nas");
    
    c.attack("Salma");
    c.attack("Amel");
    c.attack("Salma");
    c.attack("Amel");
    c.attack("Salma");
    c.attack("Amel");

    
    c.beRepaired(5);
    
    
    c.attack("Salma");
    c.attack("Amel");
    c.attack("Salma");
    c.attack("Amel");
    c.attack("Salma");
    c.attack("Amel");
    c.attack("Salma");
    c.attack("Amel");
    c.attack("Salma");
    c.attack("Amel");
    

    return (0);
}