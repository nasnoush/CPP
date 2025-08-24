/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:12:46 by nas               #+#    #+#             */
/*   Updated: 2025/08/24 12:44:03 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "default FragTrap's constructor called" << std::endl;
    
    _name = "";
    _hit_p = 100;
    _energy_p = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap's constructor with name called" << std::endl;
    
    _name = name;
    _hit_p = 100;
    _energy_p = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    _name = other._name;
    _hit_p = other._hit_p;
    _energy_p = other._energy_p;
    _attack_damage = other._attack_damage;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap's destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Function : hightFivesGuys called" << std::endl;
}

void FragTrap::attack(const std::string& target)
 {
     if (_energy_p == 0 || _hit_p == 0)
    {
        std::cout << _name << " has no energy to do anything !" << std::endl;
    }
    else
    {    
        _energy_p -= 1;
        std::cout << "FragTrap " << _name << " attacks " << target << " , causing " << _attack_damage << " points of damage !" << std::endl;
    }
 }