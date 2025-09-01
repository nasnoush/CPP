/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:53:53 by nas               #+#    #+#             */
/*   Updated: 2025/08/28 13:29:17 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain's destructeurr called" << std::endl;
}
