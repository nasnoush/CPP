/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:59:26 by nas               #+#    #+#             */
/*   Updated: 2025/09/15 14:00:17 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        _mat[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource(other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._mat[i] != NULL)
            _mat[i] = other._mat[i]->clone();
        else
            _mat[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete _mat[i];
            _mat[i] = NULL;
        }
        
        for (int i = 0; i < 4; i++)
        {
            if (other._mat[i] != NULL)
                _mat[i] = other._mat[i]->clone();
            else
                _mat[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete _mat[i];
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_mat[i] == NULL)
        {    
            _mat[i] = m->clone();
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_mat[i] != NULL && type == _mat[i]->getType())
        {
            return (_mat[i]->clone());
        }
    }
    return (NULL);
}