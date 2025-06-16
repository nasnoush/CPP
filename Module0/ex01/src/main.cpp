/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:34:04 by marvin            #+#    #+#             */
/*   Updated: 2025/06/16 11:34:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

#include <string>






// int main (void)
// {
// 	std::string input;

// 	std::cin >> input;

// 	if (input == "ADD")
// 		PhoneBook::add(void);
// 	else if (input == "SEARCH")
// 		PhoneBook::search(void);
// 	else if (input == "EXIT")
// 		PhoneBook::exit(void);
// 	else
// 		// a voir

// 	return (0);
// }

int main (void)
{

	PhoneBook phone;
	Contact	contact;


	std::string input;

	std::cin >> input;

	if (input == "ADD")
		std::cout << "j ajoute" << std::endl;
	else if (input == "SEARCH")
		std::cout << "je cherche" << std::endl;
	else if (input == "EXIT")
		std::cout << "je quitte" << std::endl;
	else
		std::cout << "je fais rien" << std::endl;

	phone.add();
	

	return (0);
}
