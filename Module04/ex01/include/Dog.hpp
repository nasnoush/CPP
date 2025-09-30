/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:42:28 by nas               #+#    #+#             */
/*   Updated: 2025/09/30 18:48:17 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

class Dog : public Animal {

    public :
    
        Dog();
        Dog (const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();
    
        void    makeSound() const;
        
    private :
    
        Brain*  _brain;
};

#endif