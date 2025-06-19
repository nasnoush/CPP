/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:25:50 by marvin            #+#    #+#             */
/*   Updated: 2025/06/16 20:25:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "../include/Contact.hpp"
#include <iostream>
#include <iomanip>


class	PhoneBook {

public:

		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void);
		// int PhoneBook::check(const std::string& str);


private:

	Contact	_contact[8];
	int 	_num_contact;
	std::string _tmpfn, _tmpln, _tmpnn;
	int 	_i;
	int 	_count;

};

#endif