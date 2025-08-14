/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:07:48 by nas               #+#    #+#             */
/*   Updated: 2025/08/14 16:10:26 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    
    public :
        
        Harl(void);
        ~Harl(void);
        void    complain(std::string level);
        
    private :
    
        void    debug();
        void    info();
        void    warning();
        void    error();
        
        typedef void (Harl::*f)(void);
        static const std::string levels[4];
        static const f action[4];

};

#endif