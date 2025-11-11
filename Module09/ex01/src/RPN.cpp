#include "../include/RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN& other)
{
    (void)other;
}

RPN& RPN::operator=(const RPN& other)
{
     (void)other;
     return (*this);
}

RPN::~RPN()
{

}

int RPN::applyOperation(int value1, char sign, int value2)
{
    if (sign == '+')
        return (value1 + value2);
    if (sign == '-')
        return (value1 - value2);
    if (sign == '/')
        return (value1 / value2);
    if (sign == '*')
        return (value1 * value2);
    return 1;
}

void RPN::parseString(std::string input)
{
    if (input.empty())
    {
            std::cerr << "Error: input is empty !" << std::endl;
            return ;
    }
    for (unsigned int i = 0; i < input.size(); i++)
    {
        if (input[i] == ' ')
            continue;
        if (isdigit(input[i]))
        {
            if (i + 1 < input.size() && isdigit(input[i + 1]))
            {
                std::cerr << "Error: numbers must be between 0 and 9 !" << std::endl;
                return ;
            }
            else
                _stack.push(input[i] - '0');
        }
        else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
        {
            char sign = input[i];
            if (_stack.size() > 1)
            {
                int first = _stack.top();
                _stack.pop();
                int second = _stack.top();
                _stack.pop();
                int result = applyOperation(second, sign, first);
                _stack.push(result);
            }
            else
            {
                std::cerr << "Error: stack must have 2 numbers in for operation !" << std::endl;
                return ;
            }
        }
        else
        {    
            std::cerr << "Error: invalid character !" << std::endl;
            return ;
        }

    }

    if (_stack.size() == 1)
    {    
        std::cout << _stack.top() << std::endl;
        return ;
    }
    // std::cout << _stack.size() << std::endl;
}

// faire un deuxieme conteneurs pour les operateurs
// a chaque croisement d'operateur, faire le calcul sur les deux dermiers nombre empile