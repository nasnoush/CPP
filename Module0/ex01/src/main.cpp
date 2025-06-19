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



int main (void)
{

	PhoneBook repertoire;
	Contact	contact;

	std::string input;

	std::cout << "Entrez : ADD , SEARCH ou EXIT" << std::endl;
	while (input != "EXIT")
	{
		std::cin >> input;

		if (input == "ADD")
			repertoire.add();
		else if (input == "SEARCH")
			repertoire.search();
	}
	return (0);
}
