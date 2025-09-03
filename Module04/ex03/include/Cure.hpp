/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:59:06 by nas               #+#    #+#             */
/*   Updated: 2025/09/03 14:58:54 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"
#include <iostream>

class Cure : public AMateria {

    public :
        Cure();
        Cure(const Cure &other);
        Cure& operator=(const Cure &other);
        ~Cure();
        
        Cure* clone() const;
        void use(ICharacter& target);


    private :

};

#endif