/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:15:34 by nadahman          #+#    #+#             */
/*   Updated: 2025/09/17 14:18:08 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
	Bureaucrat c = Bureaucrat("Boko", 160);
	
	std::cout << "Grade : " << c.getGrade() << std::endl;
	
	c.incr_grade();
	
	std::cout << "Grade : " << c.getGrade() << std::endl;
	
	c.decr_grade();
	c.decr_grade();
	c.decr_grade();
	
	std::cout << "Grade : " << c.getGrade() << std::endl;
	
	return 0;
}