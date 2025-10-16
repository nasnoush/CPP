/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:00:01 by nas               #+#    #+#             */
/*   Updated: 2025/10/16 10:23:52 by nadahman         ###   ########.fr       */
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
    catch(...) {}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "p : B" << std::endl;
        return;
    }
    catch(...) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "p : C" << std::endl;
        return;
    }
    catch(...) {}

}
