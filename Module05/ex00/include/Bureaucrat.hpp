/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:13 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/18 10:55:08 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <ostream>
#include <iostream>
#include <exception>

class Bureaucrat {

	public :
	
		Bureaucrat();
		Bureaucrat(const std::string name, int grade); // a voir
		Bureaucrat (const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();

		std::string	getName();
		int	getGrade();
		
		void	incr_grade();
		void	decr_grade();
		
		class GradeTooHighException : public std::exception {
				const char *what() const throw() { return "Grade trop haut !";}
		};
		
		class GradeTooLowException : public std::exception {
				const char *what() const throw() { return "Grade trop bas !";}
		};
		
	private :
	
		std::string _name;
		int	_grade;
};

#endif