/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:39 by nas               #+#    #+#             */
/*   Updated: 2025/09/24 11:47:50 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "../include/Bureaucrat.hpp"

class Form {

    public :
    
        Form();
        Form(const std::string name, const int gradeTosign, const int gradeToExec); // je dois faier
        Form (const Form& other);
        Form& operator=(const Form& other);
        ~Form();
        
        int getGradeToSign() const;
        int getGradetoExec() const;
        std::string getName() const;
        bool getIsSigned();
        
        void    beSigned(Bureaucrat& b);
        
        class GradeTooHighException : public std::exception {
			const char *what() const throw() { return "Grade trop haut !";}
		};
		
		class GradeTooLowException : public std::exception {
			const char *what() const throw() { return "Grade trop bas !";}
		};
		
    
    private :
        const std::string _name;
        bool _isSigned;
        const int _gradeRequieredToSign;
        const int _gradeRequieredToExecute;
};

std::ostream& operator<<(std::ostream& flux, const Form& f);

#endif