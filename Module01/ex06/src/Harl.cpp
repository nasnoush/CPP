/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:08:07 by nas               #+#    #+#             */
/*   Updated: 2025/10/01 14:12:39 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(void)
{
    
}

Harl::~Harl(void)
{
    
}

void    Harl::debug()
{
    std::cout << "[DEBUG] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "[INFO] : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "[WARNING] : I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "[ERROR] : This is unacceptable! I want to speak to the manager now." << std::endl;
}

const std::string Harl::levels[4] = 
{   
    "DEBUG", "INFO", "WARNING", "ERROR"
};

const   Harl::f Harl::action[4] = 
{
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error
};

void    Harl::complain(std::string level)
{        
    
    int pos = -1;
    
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            pos = i;
            break;
        }
    }
    
    if (pos == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }

    switch (pos)
    {
        case 0:
            this->debug();
            // fallthrough
        case 1:
            this->info();
            // fallthrough
        case 2:
            this->warning();
            // fallthrough
        case 3:
            this->error();
            break;
    }
}