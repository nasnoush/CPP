/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas <nas@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:01:11 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/15 08:21:37 by nas              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#define MAX_VAL 750
#define MAX_S 20


int main(int, char **)
{
   Array<std::string> s(MAX_S);
   std::string *mirror = new std::string[MAX_S];
   srand(time(NULL));
   for (int i = 0; i < MAX_S; i++)
   {
        const char value = 'a';
        s[i] = value;
        mirror[i] = value;
   }
   {
        Array<std::string> tmp = s;
        Array<std::string> test(tmp);
   }
    for (int i = 0; i < MAX_S; i++)
    {
        if (mirror[i] != s[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        s[2] = 'b';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        s[MAX_S - 1] = 'c';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_S; i++)
    {
        s[i] = 'e';
    }
    try
    {
        s[MAX_S - 1] = 'c';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for (int i = 0; i < MAX_S; i++)
        std::cout << s[i] << std::endl;
    std::cout << std::endl;    
    for (int i = 0; i < MAX_S; i++)
        std::cout << mirror[i] << std::endl;
        
    delete [] mirror;
    return 0;
    
}

// int main(int, char **)
// {
//    Array<char> caractere(MAX_S);
//    char *mirror = new char[MAX_S];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_S; i++)
//    {
//         const char value = 'a';
//         caractere[i] = value;
//         mirror[i] = value;
//    }
//    {
//         Array<char> tmp = caractere;
//         Array<char> test(tmp);
//    }
//     for (int i = 0; i < MAX_S; i++)
//     {
//         if (mirror[i] != caractere[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         caractere[2] = 'b';
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         caractere[MAX_S - 1] = 'c';
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     for (int i = 0; i < MAX_S; i++)
//     {
//         caractere[i] = 'e';
//     }
//     try
//     {
//         caractere[MAX_S - 1] = 'c';
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     for (int i = 0; i < MAX_S; i++)
//         std::cout << caractere[i] << std::endl;
//     std::cout << std::endl;    
//     for (int i = 0; i < MAX_S; i++)
//         std::cout << mirror[i] << std::endl;
        
//     delete [] mirror;
//     return 0;
    
// }


// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }