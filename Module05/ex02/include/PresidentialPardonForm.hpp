/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:51:16 by nas               #+#    #+#             */
/*   Updated: 2025/10/05 11:31:32 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "../include/AForm.hpp"

class PresidentialPardonForm : public Form {
    
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const& target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();
        
        void execute(Bureaucrat const & executor) const;
        
    private :
        std::string _target;
    
};

#endif