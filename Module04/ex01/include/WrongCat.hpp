/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:33:43 by nas               #+#    #+#             */
/*   Updated: 2025/09/30 13:22:12 by nadahman         ###   ########.fr       */
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

    protected :
    
        std::string _type;

};

#endif