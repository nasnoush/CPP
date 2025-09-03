/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:03:53 by nas               #+#    #+#             */
/*   Updated: 2025/09/03 14:40:51 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    
}

Cure& Cure::operator=(const Cure &other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Cure::~Cure()
{
    
}

Cure* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
