/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:58:38 by nas               #+#    #+#             */
/*   Updated: 2025/09/01 14:59:07 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : ICharacter(), _inv{nullptr}, _box(nullptr)
{

    
}

Character::Character(const Character &other) : ICharacter(other)
{

}

Character& Character::operator=(const Character &other)
{
    if (this != &other)
        ICharacter::operator=(other);
    return (*this);
}

Character::~Character()
{
    
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inv[i] == nullptr)
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
            if (_box[i] == nullptr)
            {   
                _box[i] = _inv[idx];
                break;
            }
        }
        _inv[idx] = nullptr;
    }
    else
        std::cout << "Index d'inventaire non valide !" << std::endl;
}
 
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (_inv[idx] != nullptr)
            _inv[idx]->use(target);
    }
}