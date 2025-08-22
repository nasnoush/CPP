/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/08/22 13:53:35 by nas              ###   ########.fr       */
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