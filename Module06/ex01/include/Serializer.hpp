/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:59:49 by nas               #+#    #+#             */
/*   Updated: 2025/10/11 13:33:25 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <stdlib.h>
#include <iostream>
#include "../include/Data.hpp"

class Serializer {
  
    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);


    private :
        Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        ~Serializer();
};

#endif