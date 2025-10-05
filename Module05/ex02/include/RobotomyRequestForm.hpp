/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:30:31 by nas               #+#    #+#             */
/*   Updated: 2025/10/05 11:30:55 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "../include/AForm.hpp"

class RobotomyRequestForm : public Form {
  
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const& target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
    private :
        std::string _target;
};
#endif 