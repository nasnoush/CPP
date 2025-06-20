/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:28:15 by marvin            #+#    #+#             */
/*   Updated: 2025/06/16 20:28:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

void Contact::setFirstName(std::string value) 
{
	this->_FirstName = value;
}

void Contact::setLastName(std::string value)
{
	this->_LastName = value;
}

void Contact::setNickName(std::string value)
{
	this->_NickName = value;
}

void	Contact::setPhoneNumber(std::string value)
{
	this->_PhoneNumber = value;
}

void Contact::setSecret(std::string value)
{
	this->_Secret = value;
}

std::string Contact::getFirstName()
{
	return this->_FirstName;
}

std::string Contact::getLastName()
{
	return this->_LastName;
}

std::string Contact::getNickName()
{
	return this->_NickName;
}

std::string Contact::getPhoneNumber()
{
	return this->_PhoneNumber;
}

std::string Contact::getSecret()
{
	return this->_Secret;
}

void Contact::setnum_contact(int n)
{
	if (n >= 0 && n <= 7)
		this->_num_contact = n;
}

int	Contact::getnum_contact()
{
	return this->_num_contact;
}


