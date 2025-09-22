/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:12:56 by nas               #+#    #+#             */
/*   Updated: 2025/08/13 14:12:56 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

std::string	replace_str(std::string &str_origin, std::string s1, std::string s2)
{
    unsigned long i = 0;
    std::string str_comp;

    if (s1.empty())
        return str_origin;
        
    while (i < str_origin.size())
    {
        if (str_origin.substr(i, s1.size()) == s1)
        {
            str_comp += s2;
            i += s1.size();
        }
        else
        {
            str_comp += str_origin[i];
            i++;
        }
    }
    
    return (str_comp);
}
