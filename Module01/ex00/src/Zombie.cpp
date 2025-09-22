/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:22:41 by marvin            #+#    #+#             */
/*   Updated: 2025/06/25 14:22:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) {

	std::cout << _name << "Constructor called" << std::endl;
	this->_name = name;
}

Zombie::~Zombie(void) {

	std::cout << _name << " destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
