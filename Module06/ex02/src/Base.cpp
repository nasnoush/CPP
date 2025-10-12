/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:00:01 by nas               #+#    #+#             */
/*   Updated: 2025/10/12 12:34:02 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/OClass.hpp"

Base::~Base() {}

Base* Base::generate(void)
{
    int n = rand() % 3;
    
    if (n == 0)
        return (new A);
    if (n == 1)
        return (new B);
    if (n == 2)
        return (new C);
    return NULL;
}

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "p : A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "p : B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "p : C" << std::endl;
    return ;
}

void Base::identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "p : A" << std::endl;
        return;
    }
    catch(const std::bad_cast&) {}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "p : B" << std::endl;
        return;
    }
    catch(const std::bad_cast&) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "p : C" << std::endl;
        return;
    }
    catch(const std::bad_cast&) {}
}
