/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:48 by nas               #+#    #+#             */
/*   Updated: 2025/09/22 14:04:07 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() : _gradeRequieredToExecute(0), _gradeRequieredToSign(0), 
                _isSigned(false), _name("")
{

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


