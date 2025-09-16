/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:58:38 by nas               #+#    #+#             */
/*   Updated: 2025/09/16 14:15:00 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"


Character::Character() : ICharacter()
{
    _name = "";
    for (int i = 0; i < 4; i++)
        _inv[i] = NULL;
    for (int i = 0; i < 10; i++)  
        _box[i] = NULL;
}

Character::Character(const Character &other) : ICharacter(other)
{
    _name = other._name;
    
    for (int i = 0; i < 4; i++)
    {     
        if (other._inv[i] != NULL)
            _inv[i] = other._inv[i]->clone();
        else
            _inv[i] = NULL;
    }
    
    for (int i = 0; i < 10; i++)
    {     
        if (other._box[i] != NULL)
            _box[i] = other._box[i]->clone();
        else
            _box[i] = NULL;
    }
    
}

Character& Character::operator=(const Character &other)
{       
    if (this != &other)
    {
        _name = other._name;
        
        for (int i = 0; i < 4; i++)
        {    
            delete _inv[i];
            _inv[i] = NULL;
        }
        for (int i = 0; i < 10; i++)
        {    
            delete _box[i];
            _box[i] = NULL;
        }

        for (int i = 0; i < 4; i++)
        {     
            if (other._inv[i] != NULL)
                _inv[i] = other._inv[i]->clone();
            else
                _inv[i] = NULL;
        }
    
        for (int i = 0; i < 10; i++)
        {     
            if (other._box[i] != NULL)
                _box[i] = other._box[i]->clone();
            else
                _box[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {    
        if (_inv[i])  
            delete _inv[i];
    }
    for (int i = 0; i < 10; i++)
    {    
        if (_box[i])
            delete _box[i];
    }
}

Character::Character(const std::string &name)
{
    _name = name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inv[i] == NULL)
        {    
            _inv[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        for (int i = 0; i < 10; i++)
        {
            if (_box[i] == NULL)
            {   
                _box[i] = _inv[idx];
                break;
            }
        }
        _inv[idx] = NULL;
    }
    else
        std::cout << "Index d'inventaire non valide !" << std::endl;
}
 
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (_inv[idx] != NULL)
            _inv[idx]->use(target);
    }
}

std::string const & Character::getName() const
{
    return _name;
}