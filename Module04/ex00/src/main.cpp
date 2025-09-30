/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:00:56 by nas               #+#    #+#             */
/*   Updated: 2025/09/30 18:24:07 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    // Animal a;
    // Dog d;
    // Cat c;
    
    Animal *a = new Animal();
    Animal *d = new Dog();
    Animal *c = new Cat();
    
    std::cout << std::endl;
    std::cout << d->getType() << std::endl;
    std::cout << c->getType() << std::endl;
    
    std::cout << std::endl;
    a->makeSound();
    d->makeSound();
    c->makeSound();
    
    std::cout << std::endl;
    WrongAnimal *w = new WrongAnimal();
    WrongAnimal *wc = new WrongCat();
    WrongCat *wcat = new WrongCat();
    
    std::cout << std::endl;
    w->makeSound();
    wc->makeSound();
    wcat->makeSound();
    
    delete a;
    delete d;
    delete c;
    delete w;
    delete wc;
    delete wcat;
    
    
    return 0;
}