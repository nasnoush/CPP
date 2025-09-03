/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:04:18 by nas               #+#    #+#             */
/*   Updated: 2025/09/03 14:41:03 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice &other) : AMateria(other)
{
    
}

Ice& Ice::operator=(const Ice &other)
{
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}

Ice::~Ice()
{

}

Ice* Ice::clone() const
{
    return new Ice(*this);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
