/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:48 by nas               #+#    #+#             */
/*   Updated: 2025/09/24 11:15:41 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() : _gradeRequieredToExecute(0), _gradeRequieredToSign(0), 
                _isSigned(false), _name("")
{

}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _gradeRequieredToExecute(gradeToExec),
        gradeToSign(_gradeRequieredToSign), _isSigned(false), 
{
    if (_grade < 0)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
    
    // if ()
}

Form::Form(const Form &other) : _gradeRequieredToExecute(other._gradeRequieredToExecute), _gradeRequieredToSign(other._gradeRequieredToSign), 
                _isSigned(false), _name(other._name)
{

}

Form& Form::operator=(const Form& other)
{

}

Form::~Form()
{

}

int Form::getGradetoExec() const
{
    return _gradeRequieredToExecute;
}

int Form::getGradeToSign() const
{
    return _gradeRequieredToSign;
}

std::string Form::getName() const
{
    return _name;
}

bool Form::getIsSigned()
{
    return _isSigned;
}

void    Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() <= _gradeRequieredToSign)
        _isSigned = true;
    else
        throw Form::GradeTooLowException();
}


