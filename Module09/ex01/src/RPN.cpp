#include "../include/RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN& other)
{
    _stack = other._stack;
}

RPN& RPN::operator=(const RPN& other)
{
     if (this != &other)
        _stack = other._stack;
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
        if ((input[i] == '+' || input[i] == '-') && i + 1 < input.size() && isdigit(input[i + 1]))
        {
            std::cerr << "Error: invalid syntax !" << std::endl;
            return;
        }
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
        else if (i > 0 && (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*') && input[i - 1] == ' ')
        {
            if (i == 0 || (!isspace(input[i - 1]) && !isdigit(input[i - 1])) || (i + 1 < input.size() && !isspace(input[i + 1]) && !isdigit(input[i + 1])))
            {
                std::cerr << "Error: invalid operator spacing !" << std::endl;
                return;
            }
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
        //debug
        // std::cout << "La taille est : " << _stack.size() << std::endl;
        return ;
    }
    else
    {
        std::cout << "Error: the operation is not finished" << std::endl;
        //debug
        // std::cout << "La taille est : " << _stack.size() << std::endl;
        return ;
    }
}

// tester la division par 0