#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN {

    public :
        RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
        ~RPN();

        void parseString(std::string input);
        int applyOperation(int value1, char sign, int value2);

    private :
        std::stack<int> _stack;
};

#endif