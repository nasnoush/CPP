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

#include <iostream>


class	PhoneBook {

public:

		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void);
		void	exit(void);



private:

	int tab[7];

};

#endif