/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:59:04 by nas               #+#    #+#             */
/*   Updated: 2025/09/03 14:45:39 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "../include/AMateria.hpp"
#include "../include/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource& operator=(const MateriaSource &other);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        
    private :
        AMateria* _mat[4];
};

#endif