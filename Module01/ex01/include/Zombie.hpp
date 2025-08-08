/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:53:46 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 13:53:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#include <iomanip>
#include <sstream>



class Zombie {

public:

	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);

private:

	std::string _name;

};

Zombie* zombieHorde(int N, std::string name);


#endif