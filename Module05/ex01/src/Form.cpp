/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:48 by nas               #+#    #+#             */
/*   Updated: 2025/10/02 11:20:01 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() : _name(""), _isSigned(false), _gradeRequieredToSign(0),_gradeRequieredToExecute(0)
{

}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _isSigned(false), 
            _gradeRequieredToSign(gradeToSign), _gradeRequieredToExecute(gradeToExec)
{
    if (_gradeRequieredToExecute < 0 || _gradeRequieredToSign < 0)
        throw GradeTooLowException();
    if (_gradeRequieredToExecute > 150 || _gradeRequieredToSign > 150)
        throw GradeTooHighException();
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

bool Form::getIsSigned()
{
    return _isSigned;
}

void    Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() <= _gradeRequieredToSign)
    {    
        _isSigned = true;
        std::cout << b.getName() << " signed " << Form::getName() << std::endl;
    }
    else
        throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& flux, const Form& f)
{
	flux << "Name of Form : " << f.getName() << ", Grade to Sign : " << f.getGradeToSign() << ", Grade to Exec : " << f.getGradetoExec() << ".";
	return flux;
}


