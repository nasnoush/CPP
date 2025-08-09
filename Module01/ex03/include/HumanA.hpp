/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:49:43 by marvin            #+#    #+#             */
/*   Updated: 2025/08/09 14:49:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "../include/Weapon.hpp"

class HumanA {

	public :

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

	private :

	std::string _name;
	Weapon &_weapon;

};

#endif