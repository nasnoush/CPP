/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:53:32 by nas               #+#    #+#             */
/*   Updated: 2025/10/01 10:52:07 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Header.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    
    std::cout << std::endl;
    std::cout << "Test de unequip (ca ne doit rien faire car plus rien equipe)" << std::endl;
    
    me->unequip(0);
    me->unequip(1);
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    std::cout << std::endl;
    std::cout << "Check de box" << std::endl;
    
    AMateria* m = me->getBox(0);
    if (m)
        std::cout << "La box est rempli par :" << m->getType() << std::endl;
    else
        std::cout << "La box est vide" << std::endl;

    delete bob;
    delete me;
    delete src;
    

    return 0;
}