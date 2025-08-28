/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:43:47 by nas               #+#    #+#             */
/*   Updated: 2025/08/28 13:16:28 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
    _brain = new Brain();
    _type = "Dog";
    std::cout << "Dog's constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    _brain = new Brain(*other._brain);
    _type = other._type;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
    {   
        delete _brain;
        _type = other._type;
        _brain = new Brain(*other._brain);
    }
    
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog's deconstructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Wouaaff.." << std::endl;
}