/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:33:30 by nas               #+#    #+#             */
/*   Updated: 2025/08/13 14:50:52 by nas              ###   ########.fr       */
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
};


#endif

