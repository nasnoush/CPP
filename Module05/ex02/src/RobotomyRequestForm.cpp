/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 13:21:47 by nas               #+#    #+#             */
/*   Updated: 2025/10/05 15:23:13 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : AForm("Robotomy", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
        _target = other._target;
    return (*this);
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::action() const
{
    int rnum = rand() % 2;
    std::cout << "BZZZZZZZ.." << std::endl;
    if (rnum == 0)
        std::cout << _target << " has been robotomized successfully " << std::endl;
    else
        std::cout << _target << " has been robotomized failed " << std::endl;
}
