/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:57:21 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 13:57:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(void) {

	
}

Zombie::~Zombie(void) {

	std::cout << _name << " deleted" << std::endl;
}

void Zombie::announce(void) {

	std::cout << _name << " : AAAAHHHHH" << std::endl; 
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
