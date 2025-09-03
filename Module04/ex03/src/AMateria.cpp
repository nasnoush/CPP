/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:03:30 by nas               #+#    #+#             */
/*   Updated: 2025/09/03 14:53:43 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
    _type = "";
}

AMateria::AMateria(const AMateria &other)
{
    _type = other._type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
        _type = other._type;
    return *this;
}

AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

std::string const & AMateria::getType() const
{
    return _type;
}

