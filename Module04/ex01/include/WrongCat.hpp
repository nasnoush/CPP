/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:33:43 by nas               #+#    #+#             */
/*   Updated: 2025/08/26 13:36:55 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../include/WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    public :
    
        WrongCat();
        WrongCat (const WrongCat &other);
        WrongCat& operator=(const WrongCat &other);
        ~WrongCat();
    
        void    makeSound() const;

    private :
    
        std::string _type;

};

#endif