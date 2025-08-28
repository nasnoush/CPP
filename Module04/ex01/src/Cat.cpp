/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:43:44 by nas               #+#    #+#             */
/*   Updated: 2025/08/28 13:14:30 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
    _brain = new Brain();
    _type = "Cat";
    std::cout << "Cat's constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    _brain = new Brain(*other._brain);
    _type = other._type;
    std::cout << "Cat's copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{    
    if (this != &other)
    {
        _type = other._type;
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat's deconstructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaouuu.." << std::endl;
}

