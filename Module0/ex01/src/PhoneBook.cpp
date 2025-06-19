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
	_i = 0;
	_count = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "destructeur phone " << std::endl;
	return ;
}

int PhoneBook::check(const std::string& str)
{
	if (str.empty()) {
		std::cout << "Le champ ne doit pas être vide !" << std::endl;
		return 0;
	}
	return 1;
}


void	PhoneBook::add() {

	std::string fn, ln, nn, pn, scrt;
	std::cin.ignore();

	std::cout << "First Name : ";
	std::getline(std::cin, fn);
	if (!check(fn)) return;
	_contact[_i].setFirstName(fn);

	std::cout << "Last Name : ";
	std::getline(std::cin, ln);
	if (!check(ln)) return;
	_contact[_i].setLastName(ln);

	std::cout << "Nick Name : ";
	std::getline(std::cin, nn);
	if (!check(nn)) return;
	_contact[_i].setNickName(nn);

	std::cout << "Phone Number : ";
	std::getline(std::cin, pn);
	if (!check(pn)) return;
	_contact[_i].setPhoneNumber(pn);

	std::cout << "Darkest secret : ";
	std::getline(std::cin, scrt);
	if (!check(scrt)) return;
	_contact[_i].setSecret(scrt);


	std::cout << "Contact numéro " << _i << " crée." << std::endl;

	_i = (_i + 1) % 8;
	if (_count < 8)
		_count++;
}

void	PhoneBook::search(void)
{
	std::string	num;
	int index = 0;

	// Afficher les contacts comme demandé
	// Liste de 4 colonnes separées par des pipes et 10 char max

	std::cout << "|" << std::setw(10) << std::right << "Index";  
	std::cout << "|" << std::setw(10) << std::right << "First Name";
	std::cout << "|" << std::setw(10) << std::right << "Last Name";
	std::cout << "|" << std::setw(10) << std::right << "Nick Name" << std::endl;  

    

	while (index < _count)
	{
		_tmpfn = _contact[index].getFirstName();
		_tmpln = _contact[index].getLastName();
		_tmpnn = _contact[index].getNickName();

		if (_tmpfn.size() > 10)
		{
			_tmpfn.resize(10);
			_tmpfn.replace(9, 1, ".");
		}
		if (_tmpln.size() > 10)
		{
			_tmpln.resize(10);
			_tmpln.replace(9, 1, ".");
		}
		if (_tmpnn.size() > 10)
		{
			_tmpnn.resize(10);
			_tmpnn.replace(9, 1, ".");
		}


		std::cout << "|" << std::setw(10) << std::right << index;  
		std::cout << "|" << std::setw(10) << std::right << _tmpfn;
		std::cout << "|" << std::setw(10) << std::right << _tmpln;
		std::cout << "|" << std::setw(10) << std::right << _tmpnn << std::endl; 

		index++;
	}






	// Demander de choisir un contact et l'afficher
	std::cout << "Choix de Contact : ";
	std::cin >> num;

	for (size_t d = 0; d < num.size(); d++)
	{
		if (!isdigit(num[d]))
		{
			std::cout << "Veuillez entrée un numero !" << std::endl;
			return ;
		}
	}

	int i = std::stoi(num);

	if (i < 0 || i >= _count)
	{	
		std::cout << "Veuillez choisir un numéro valide !" << std::endl;
		return ;
	}

	std::cout << "Contact n° [" << num << "] :" << std::endl;

	std::cout << "First Name : " << _contact[i].getFirstName() << std::endl;
	std::cout << "Last Name : " << _contact[i].getLastName() << std::endl;
	std::cout << "Nick Name : " << _contact[i].getNickName() << std::endl;
	std::cout << "Phone Number : " << _contact[i].getPhoneNumber() << std::endl;
	std::cout << "Secret : " << _contact[i].getSecret() << std::endl;

}
