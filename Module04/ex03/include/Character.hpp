/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:54:35 by nas               #+#    #+#             */
/*   Updated: 2025/09/01 14:45:54 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../include/Header.hpp"

class Character : public ICharacter {

    public :
        Character();
        Character(const Character &other);
        Character& operator=(const Character &other);
        ~Character();
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        


    
    private :
    
        AMateria *_inv[4];
        AMateria *_box[10];
    
};

#endif
