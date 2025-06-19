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

	PhoneBook repertoire;
	Contact	contact;

	std::string input;

	repertoire._i = 0;
	repertoire._count = 0;

	// contact.setnum_contact(5);

	// std::cout << "numero choisi : " << contact.getnum_contact() << std::endl;

	while (input != "EXIT")
	{
		std::cin >> input;

		if (input == "ADD")
		{	
			repertoire.add();

			if (repertoire._count < 8)
       			repertoire._count++;

			repertoire._i++;
			if (repertoire._i == 8)
				repertoire._i = 0;
		}
		else if (input == "SEARCH")
			repertoire.search();
	}
	return (0);
}
