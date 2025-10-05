/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 13:21:47 by nas               #+#    #+#             */
/*   Updated: 2025/10/05 12:19:23 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("Robotomy", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : _target(other._target)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int exec = getGradetoExec();
    bool issigned = getIsSigned();
    
    if (issigned == 0 || executor.getGrade() > exec)
        throw GradeTooLowException();
    else
    {
        int rnum = rand() % 2;
        std::cout << "BZZZZZZZ.." << std::endl;
        if (rnum % 2 == 0)
            std::cout << _target << " has been robotomized successfully " << std::endl;
        else
            std::cout << _target << " has been robotomized failed " << std::endl;
    }
}