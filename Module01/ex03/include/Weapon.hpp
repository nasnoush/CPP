/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:49:46 by marvin            #+#    #+#             */
/*   Updated: 2025/08/09 14:49:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class Weapon {

	public :

		Weapon(std::string type);
		~Weapon(void);

		std::string	const & getType() const;
		void setType(std::string value);


	private :

	std::string _type;
};

#endif
