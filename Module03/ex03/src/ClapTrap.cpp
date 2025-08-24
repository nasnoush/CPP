/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:54 by nas               #+#    #+#             */
/*   Updated: 2025/08/22 13:58:32 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "";
    _hit_p = 10;
    _energy_p = 10;
    _attack_damage = 0;
    std::cout << "Default's constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << name << "'s constructor called" << std::endl;
    
    this->_name = name;
    _hit_p = 10;
    _energy_p = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    _name = other._name;
    _hit_p = other._hit_p;
    _attack_damage = other._attack_damage;
    _energy_p = other._energy_p;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energy_p == 0 || _hit_p == 0)
    {
        std::cout << _name << " has no energy to do anything !" << std::endl;
    }
    else
    {    
        _energy_p -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attack_damage << " points of damage !" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " take damage, lost " << amount << " points of damage !" << std::endl;
    
    _hit_p = _hit_p - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_p == 0 || _hit_p == 0)
    {
        std::cout << _name << " has no energy to do anything !" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " heals for " << amount << " health points !" << std::endl;
        _hit_p = _hit_p + amount;
        _energy_p -= 1;
    }
}

