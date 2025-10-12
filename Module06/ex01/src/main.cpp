/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:23:51 by nas               #+#    #+#             */
/*   Updated: 2025/10/11 13:43:40 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

int main()
{
    Data a;
    Data *d = &a;
    
    a.x = 5;
    a.test = "azy";
    std::cout << "Avant :"<< std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "x = " << d->x << std::endl;
    std::cout << "test = " << d->test << std::endl;
    
    uintptr_t raw = Serializer::serialize(d);
    
    std::cout << "Serialize Apres :"<< std::endl;
    std::cout << "raw = " << raw << std::endl;
     std::cout << "x = " << d->x << std::endl;
     std::cout << "test = " << d->test << std::endl;
    
    Data *n = Serializer::deserialize(raw);
    
    std::cout << "Deserialize :"<< std::endl;
    std::cout << "n = " << n << std::endl;
    std::cout << "x = " << n->x << std::endl;
    std::cout << "test = " << d->test << std::endl;
    
    
    
    return (0);
}