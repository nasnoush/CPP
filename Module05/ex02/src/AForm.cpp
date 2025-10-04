/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:48 by nas               #+#    #+#             */
/*   Updated: 2025/10/03 20:06:19 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() : _name(""), _isSigned(false), _gradeRequieredToSign(1),_gradeRequieredToExecute(1)
{

}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _isSigned(false), 
            _gradeRequieredToSign(gradeToSign), _gradeRequieredToExecute(gradeToExec)
{
    if (_gradeRequieredToExecute < 1 || _gradeRequieredToSign < 1)
        throw GradeTooHighException();
    if (_gradeRequieredToExecute > 150 || _gradeRequieredToSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _isSigned(false), _gradeRequieredToSign(other._gradeRequieredToSign),
 _gradeRequieredToExecute(other._gradeRequieredToExecute) 
{

}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        _isSigned = other._isSigned;
    return (*this);
        
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

bool Form::getIsSigned() const
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

std::ostream& operator<<(std::ostream& flux, const Form& f)
{
	flux << "Name of Form : " << f.getName() << ", Grade to Sign : " << f.getGradeToSign() << ", Grade to Exec : " << f.getGradetoExec() << ".";
	return flux;
}


