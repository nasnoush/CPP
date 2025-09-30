/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/09/30 18:53:56 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
    const int size = 4;
    Animal* animals[size];

    std::cout << "test des constr et destr" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i)
        delete animals[i];
        
    std::cout << std::endl;
    std::cout << "test de la deep copy" << std::endl;
    Dog* original = new Dog();
    original->makeSound();
    std::cout << std::endl;
    
    Dog* copy = new Dog(*original);
    copy->makeSound();
    std::cout << std::endl;
    
    delete original;
    std::cout << std::endl;
    
    copy->makeSound();
    std::cout << std::endl;
    
    delete copy;

    return 0;
}