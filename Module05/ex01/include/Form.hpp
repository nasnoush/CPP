/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:25:39 by nas               #+#    #+#             */
/*   Updated: 2025/09/22 14:26:59 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "../include/Bureaucrat.hpp"

class Form {

    public :
    
        Form();
        // je dois faier
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