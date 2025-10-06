/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:48 by nas               #+#    #+#             */
/*   Updated: 2025/10/05 15:11:55 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm() : _name(""), _isSigned(false), _gradeRequieredToSign(1),_gradeRequieredToExecute(1)
{

}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _isSigned(false), 
            _gradeRequieredToSign(gradeToSign), _gradeRequieredToExecute(gradeToExec)
{
    if (_gradeRequieredToExecute < 1 || _gradeRequieredToSign < 1)
        throw GradeTooHighException();
    if (_gradeRequieredToExecute > 150 || _gradeRequieredToSign > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _isSigned(false), _gradeRequieredToSign(other._gradeRequieredToSign),
 _gradeRequieredToExecute(other._gradeRequieredToExecute) 
{

}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
        _isSigned = other._isSigned;
    return (*this);
        
}

AForm::~AForm()
{

}

int AForm::getGradetoExec() const
{
    return _gradeRequieredToExecute;
}

int AForm::getGradeToSign() const
{
    return _gradeRequieredToSign;
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

void    AForm::beSigned(Bureaucrat& b)
{
    if (b.getGrade() <= _gradeRequieredToSign) 
        _isSigned = true;
    else
        throw AForm::GradeTooLowException();
}

void    AForm::execute(Bureaucrat const & executor) const
{
    if (_isSigned == 0)
        throw FormNotSignedException();
    else if (executor.getGrade() > getGradetoExec())
        throw GradeTooLowException();
    else
        action();
}

std::ostream& operator<<(std::ostream& flux, const AForm& f)
{
	flux << "Name of Form : " << f.getName() << ", Grade to Sign : " << f.getGradeToSign() << ", Grade to Exec : " << f.getGradetoExec() << ".";
	return flux;
}


