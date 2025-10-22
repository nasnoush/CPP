#include "../include/MutantStack.hpp"

int main()
{
	std::stack<int> stack;

	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	std::cout << stack.size() << std::endl;

	stack.pop();

	std::cout << stack.size() << std::endl;

}