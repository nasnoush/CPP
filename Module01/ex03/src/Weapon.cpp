/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:49:35 by marvin            #+#    #+#             */
/*   Updated: 2025/08/09 14:49:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {

}

Weapon::~Weapon(void) {


}

std::string	const & Weapon::getType() const 
{
	return (this->_type);
}



void Weapon::setType(std::string value) 
{
	this->_type = value;
}

