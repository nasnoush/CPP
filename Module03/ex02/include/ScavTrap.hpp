/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:50:36 by nas               #+#    #+#             */
/*   Updated: 2025/08/23 20:22:17 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream> 


#include "../include/ClapTrap.hpp"

class ScavTrap : public ClapTrap {
  
    public :
    
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ScavTrap& operator=(const ScavTrap &other);
    ~ScavTrap();
    
    void attack(const std::string& target);
    void guardGate();

    
    private :

};


#endif
