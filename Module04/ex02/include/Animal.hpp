/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:45:01 by nas               #+#    #+#             */
/*   Updated: 2025/08/30 12:44:39 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
    
    public :
        
        Animal();
        Animal (const Animal &other);
        Animal& operator=(const Animal &other);
        virtual ~Animal();
        
        std::string    getType() const;
        virtual void    makeSound() const = 0;

    private :
    
        std::string _type;
        
};

#endif