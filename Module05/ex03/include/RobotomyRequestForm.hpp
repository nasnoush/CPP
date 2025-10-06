/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 12:30:31 by nas               #+#    #+#             */
/*   Updated: 2025/10/06 10:37:31 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "../include/AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
  
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const& target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();

        void action() const;
    private :
        std::string _target;
};
#endif 