/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:49:41 by marvin            #+#    #+#             */
/*   Updated: 2025/08/09 14:49:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {



}

HumanA::~HumanA(void) {

}

void	HumanA::attack(void)
{
	std::cout << "<" << _name << "> " << "attacks with their " << "<" << _weapon.getType() << ">" << std::endl; 
}
