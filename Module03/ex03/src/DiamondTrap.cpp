/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:23:39 by nas               #+#    #+#             */
/*   Updated: 2025/08/24 14:00:22 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << "default diamond's constructor" << std::endl;

    _name = "_clap_name";
    _hit_p = 100;
    _energy_p = 50;
    _attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    std::cout << "diamond's constructor with name" << std::endl;

    ClapTrap::_name = name + "_clap_name";
    _d_name = name;
    _hit_p = 100;
    _energy_p = 50;
    _attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other)
{
    _d_name = other._d_name;
    _name = other._name;
    _hit_p = other._hit_p;
    _energy_p = other._energy_p;
    _attack_damage = other._attack_damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        _d_name = other._d_name;
        _name = other._name;
        _hit_p = other._hit_p;
        _energy_p = other._energy_p;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap's destructor called" << std::endl;
}


void DiamondTrap::whoAmI()
{
    std::cout << "Le nom de DiamondTrap est " << DiamondTrap::_d_name << " et celui de ClapTrap est " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}