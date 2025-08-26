/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:42:26 by nas               #+#    #+#             */
/*   Updated: 2025/08/26 13:26:26 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../include/Animal.hpp"

class Cat : public Animal {

    public :
    
        Cat();
        Cat (const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();
    
        void    makeSound() const;

    private :
    
        std::string _type;

};

#endif