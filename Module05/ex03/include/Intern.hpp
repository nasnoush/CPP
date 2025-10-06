/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:39:50 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/06 18:16:39 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

class Intern {
	
	public :
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();
		
		typedef AForm* (*f)(const std::string&);
		static const std::string Name[3];
		static const f Createfonct[3];
		AForm* makeForm(std::string const &FormName, std::string const &FormTarget);
		
		static AForm* createRobo(const std::string &target);
		static AForm* createPres(const std::string &target);
		static AForm* createShru(const std::string &target);
		
	
	private :

};

#endif