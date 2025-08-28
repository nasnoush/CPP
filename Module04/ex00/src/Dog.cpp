/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:43:47 by nas               #+#    #+#             */
/*   Updated: 2025/08/26 13:56:22 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog's constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    _type = other._type;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
        _type = other._type;
    
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog's deconstructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Wouaaff.." << std::endl;
}