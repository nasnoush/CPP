/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:13 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/24 13:15:57 by nadahman         ###   ########.fr       */
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
		Bureaucrat(const std::string name, int grade);
		Bureaucrat (const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();

		std::string	getName() const;
		int	getGrade() const;
		
		void	incr_grade();
		void	decr_grade();
		
		class GradeTooHighException : public std::exception {
				const char *what() const throw() { return "Grade trop haut !";}
		};
		
		class GradeTooLowException : public std::exception {
				const char *what() const throw() { return "Grade trop bas !";}
		};
		
	private :
	
		const	std::string _name;
		int	_grade;
};

std::ostream& operator<<(std::ostream& flux, const Bureaucrat& b);
// surcharge d'operateur : flux c'est pour la sortie (cout par ex)
//                         b pour le bureaucrat
// en gros pour ecrire dans le flux ce que je fais

#endif