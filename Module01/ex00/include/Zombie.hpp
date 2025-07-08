/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:23:13 by marvin            #+#    #+#             */
/*   Updated: 2025/06/25 14:23:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#include <iomanip>
#include <sstream>



class Zombie {

public:

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);


private:

	std::string _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif