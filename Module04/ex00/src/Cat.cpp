/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:43:44 by nas               #+#    #+#             */
/*   Updated: 2025/08/26 13:43:24 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat's constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    _type = other._type;
}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
        _type = other._type;
    
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat's deconstructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaouuu.." << std::endl;
}

