/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:56:37 by nas               #+#    #+#             */
/*   Updated: 2025/09/03 14:56:55 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;
class AMateria
{
    protected:
    
    std::string _type;
    
    public:
    
    AMateria();
    virtual ~AMateria();
    AMateria(const AMateria& other);
    AMateria& operator=(const AMateria &other);
    
    AMateria(std::string const & type);

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif