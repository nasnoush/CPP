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
#include "../include/Contact.hpp"


PhoneBook::PhoneBook(void) {

	std::cout << "Constructeur phone " << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "destructeur phone " << std::endl;
	return ;
}


void	PhoneBook::add() {

	std::string fn, ln, nn, pn, scrt;

	std::cout << "First Name : ";
	std::cin >> fn;
	_contact[_i].setFirstName(fn);
	std::cout << "Last Name : ";
	std::cin >> ln;
	_contact[_i].setLastName(ln);
	std::cout << "Nick Name : ";
	std::cin >> nn;
	_contact[_i].setNickName(nn);
	std::cout << "Phone Number : ";
	std::cin >> pn;
	_contact[_i].setPhoneNumber(ln);
	std::cout << "Darkest secret : ";
	std::cin >> scrt;
	_contact[_i].setSecret(scrt);


	std::cout << "Contact numéro " << _i << " crée." << std::endl;
}

void	PhoneBook::search(void)
{
	std::string	num;

	// Afficher les contacts comme demandé
	// Liste de 4 colonnes separé par des pipes et 10 char max

	std::cout << ;



	// Demander de choisir un contact et l'afficher

	std::cout << "Choix du contact : ";
	std::cin >> num;
	int i = std::stoi(num);

	std::cout << "Contact n° [" << num << "] :" << std::endl;

	std::cout << "First Name : " << _contact[i].getFirstName() << std::endl;
	std::cout << "Last Name : " << _contact[i].getLastName() << std::endl;
	std::cout << "Nick Name : " << _contact[i].getNickName() << std::endl;
	std::cout << "Phone Number : " << _contact[i].getPhoneNumber() << std::endl;
	std::cout << "Secret : " << _contact[i].getSecret() << std::endl;

}
