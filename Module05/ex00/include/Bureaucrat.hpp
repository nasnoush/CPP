/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:13 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/17 13:44:26 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <ostream>
#include <iostream>

class Bureaucrat {

	public :
	
		Bureaucrat();
		Bureaucrat(std::string name, int grade); // a voir
		Bureaucrat (const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();

		void	GradeTooHighException();
		void	GradeTooLowException();
		
		
		std::string	getName();
		int	getGrade();
		
		void	incr_grade();
		void	decr_grade();
		
		
	private :
	
		std::string _name;
		int	_grade;
};

#endif