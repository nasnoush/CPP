/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:53:43 by nas               #+#    #+#             */
/*   Updated: 2025/08/28 13:29:55 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "../include/Animal.hpp"

#include <string>

class Brain {

    public :
    
        Brain();
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain();
    
        
    private :
    
        std::string ideas[100];

    
};

#endif