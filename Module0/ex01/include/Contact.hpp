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

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>
#include <iomanip>
#include <sstream>

class	Contact {

public:

	Contact(void);
	~Contact(void);

	void setFirstName(std::string value);
	void setLastName(std::string value);
	void setNickName(std::string value);
	void setPhoneNumber(std::string value);
	void setSecret(std::string value); 

	void setnum_contact(int n);

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getSecret();

	int	getnum_contact();


	

private:

	std::string _FirstName, _LastName, _NickName, _PhoneNumber, _Secret;
	int 	_num_contact;
};

#endif