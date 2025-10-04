/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:30:11 by nas               #+#    #+#             */
/*   Updated: 2025/10/04 13:29:48 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "../include/AForm.hpp"

class ShrubberyCreationForm : public Form {
    
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& opeator=(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
        
        void execute(Bureaucrat const & executor) const;
};

#endif