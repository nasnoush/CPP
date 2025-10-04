/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:39 by nas               #+#    #+#             */
/*   Updated: 2025/10/04 12:59:14 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "../include/Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public :
    
        Form();
        Form(const std::string name, const int gradeTosign, const int gradeToExec); // je dois faier
        Form (const Form& other);
        Form& operator=(const Form& other);
        virtual ~Form();
        
        int getGradeToSign() const;
        int getGradetoExec() const;
        std::string getName() const;
        bool getIsSigned() const;
        
        void    beSigned(Bureaucrat& b);
        
        class GradeTooHighException : public std::exception {
			const char *what() const throw() { return "Form : Grade trop haut !";}
		};
		
		class GradeTooLowException : public std::exception {
			const char *what() const throw() { return "Form : Grade trop bas !";}
		};
		
        virtual void execute(Bureaucrat const & executor) const = 0;
    
    private :
        const std::string _name;
        bool _isSigned;
        const int _gradeRequieredToSign;
        const int _gradeRequieredToExecute;
};

std::ostream& operator<<(std::ostream& flux, const Form& f);

#endif