/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:58:20 by nas               #+#    #+#             */
/*   Updated: 2025/09/03 14:58:57 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"
#include <iostream>

class Ice : public AMateria {

    public :
    
        Ice();
        Ice(const Ice &other);
        Ice& operator=(const Ice &other);
        ~Ice();

        Ice* clone() const;
        void use(ICharacter& target);

    private:
};

#endif
