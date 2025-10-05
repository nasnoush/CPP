/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:29:58 by nas               #+#    #+#             */
/*   Updated: 2025/10/05 12:40:08 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("Shrubbery", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : _target(other._target)
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        _target = other._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    int exec = getGradetoExec();
    bool issigned = getIsSigned();
    
    if (issigned == 0 || executor.getGrade() > exec)
        throw GradeTooLowException();
    else
    {
        std::ofstream file(_target + "_shrubbery");
        
        file << "          _-_ 
                        /~~   ~~\
                     /~~         ~~\
                    {               }
                    \  _-     -_  /
                       ~  \\ //  ~
                    _- -   | | _- _
                      _ -  | |   -_
                          // \\ "

        file.close();
    }
}