/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 10:54:37 by nas               #+#    #+#             */
/*   Updated: 2025/10/13 10:02:13 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include "ctime"
#include "cstdlib"
#include "iostream"
#include <typeinfo>

class Base {

    public :
        virtual ~Base();
        
        static Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
    
    private :
};

#endif