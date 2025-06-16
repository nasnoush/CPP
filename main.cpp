/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:48:24 by marvin            #+#    #+#             */
/*   Updated: 2025/06/14 13:48:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main (int argc, char **argv)
{
	if (argc < 2)
		return (1);
	int i;
	int j;

	for (j = 1; argv[j]; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			argv[j][i] = toupper(argv[j][i]);
		}
	}
	for (j = 1; argv[j]; j++)
	{
		std::cout << argv[j] << std::endl;
	}
}