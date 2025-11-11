#include "../include/RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: Bad argument !" << std::endl;
        return 0;
    }
    RPN rpn;

    rpn.parseString(av[1]);

    // std::stack<int> st;

    // st.push(10);

    // std::cout << st.top() << std::endl;

    return (0);

}