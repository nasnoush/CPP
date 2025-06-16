/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:01:19 by marvin            #+#    #+#             */
/*   Updated: 2025/06/16 15:01:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "Constructeur phone " << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "destructeur phone " << std::endl;
	return ;
}


void	PhoneBook::add(void) {

	std::string fn, ln, nn, pn, scrt;


	std::cout << "First Name : ";
	std::cin >> fn;
	std::cout << "Last Name : ";
	std::cin >> ln;
	std::cout << "Nick Name : ";
	std::cin >> nn;
	std::cout << "Phone Number : ";
	std::cin >> pn;
	std::cout << "Darkest secret : ";
	std::cin >> scrt;
}
