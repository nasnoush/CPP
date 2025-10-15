/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 10:54:37 by nas               #+#    #+#             */
/*   Updated: 2025/10/15 15:50:19 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include "ctime"
#include "cstdlib"
#include "iostream"

class Base {

    public :
        virtual ~Base();
        
        static Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
    
    private :
};

#endif