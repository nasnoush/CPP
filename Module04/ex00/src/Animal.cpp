/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:44:08 by nas               #+#    #+#             */
/*   Updated: 2025/08/26 13:19:34 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal's constructor called" << std::endl;
    _type = "";
}

Animal::Animal(const Animal &other)
{
    _type = other._type;
}

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other)
        _type = other._type;
    
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal's destructor called" << std::endl;
}

std::string    Animal::getType() const
{
    return _type;
}

void    Animal::makeSound() const
{

}