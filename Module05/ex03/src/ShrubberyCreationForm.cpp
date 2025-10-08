/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:29:58 by nas               #+#    #+#             */
/*   Updated: 2025/10/08 11:01:13 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : AForm("Shrubbery", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target)
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

void ShrubberyCreationForm::action() const
{
    std::string filename = _target + "_shrubbery";
    std::ofstream file((filename).c_str());
        
    file << "          _-_\n";
    file << "        /~~   ~~\\\n";
    file << "     /~~         ~~\\\n";
    file << "    {               }\n";
    file << "    \\  _-     -_  /\n";
    file << "       ~  \\\\ //  ~\n";
    file << "    _- -   | | _- _\n";
    file << "      _ -  | |   -_\n";
    file << "          // \\\\\n";
    file << "arbre";

    file.close();
}