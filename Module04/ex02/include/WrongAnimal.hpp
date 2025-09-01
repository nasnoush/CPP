/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:35:32 by nas               #+#    #+#             */
/*   Updated: 2025/08/26 13:36:42 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    
    public :
        
        WrongAnimal();
        WrongAnimal (const WrongAnimal &other);
        WrongAnimal& operator=(const WrongAnimal &other);
        ~WrongAnimal();
        
        std::string    getType() const;
        void    makeSound() const;

    private :
    
        std::string _type;
        
};

#endif