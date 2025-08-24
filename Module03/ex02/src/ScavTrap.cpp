/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:50:51 by nas               #+#    #+#             */
/*   Updated: 2025/08/24 12:33:05 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "default ScavTrap's constructor called" << std::endl;
    
    _name = "";
    _hit_p = 100;
    _energy_p = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "name : ScavTrap's constructor called" << std::endl;
    
    _name = name;
    _hit_p = 100;
    _energy_p = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    _name = other._name;
    _hit_p = other._hit_p;
    _energy_p = other._energy_p;
    _attack_damage = other._attack_damage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        _name = other._name;
        _hit_p = other._hit_p;
        _energy_p = other._energy_p;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor's ScavTrap called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "function guardGate called" << std::endl;
}

 void ScavTrap::attack(const std::string& target)
 {
     if (_energy_p == 0 || _hit_p == 0)
    {
        std::cout << _name << " has no energy to do anything !" << std::endl;
    }
    else
    {    
        _energy_p -= 1;
        std::cout << "ScavTrap " << _name << " attacks " << target << " , causing " << _attack_damage << " points of damage !" << std::endl;
    }
 }