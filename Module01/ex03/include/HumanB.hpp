/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:49:45 by marvin            #+#    #+#             */
/*   Updated: 2025/08/09 14:49:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "../include/Weapon.hpp"

class HumanB {

	public :

		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon &weapon);
		void	attack();

	private :

		std::string _name;
		Weapon	*_weapon;
};

#endif
