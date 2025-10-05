/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:39 by nas               #+#    #+#             */
/*   Updated: 2025/10/05 15:21:21 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "../include/Bureaucrat.hpp"

class Bureaucrat;

class AForm {

    public :
    
        AForm();
        AForm(const std::string name, const int gradeTosign, const int gradeToExec); // je dois faier
        AForm (const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();
        
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
        
        class FormNotSignedException : public std::exception {
            const char *what() const throw() { return "Form not signed !";}
        };
		
        void execute(Bureaucrat const & executor) const;
        virtual void action() const = 0;
    
    private :
        const std::string _name;
        bool _isSigned;
        const int _gradeRequieredToSign;
        const int _gradeRequieredToExecute;
};

std::ostream& operator<<(std::ostream& flux, const AForm& f);

#endif