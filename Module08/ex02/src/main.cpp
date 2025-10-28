#include "../include/MutantStack.hpp"

// int main()
// {
// 	std::stack<int> stack;

// 	stack.push(20);
// 	stack.push(30);
// 	stack.push(40);
// 	stack.push(50);

// 	std::cout << stack.size() << std::endl;

// 	stack.pop();
// 	stack.pop();

// 	std::cout << stack.size() << std::endl;

// }

int main()
{
	MutantStack<int> stack;

	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);


	for (MutantStack<int>::it it = stack.begin(); it != stack.end(); ++it)
		std::cout << *it << std::endl;

	stack.pop();
	std::cout << std::endl;
	
	for (MutantStack<int>::it it = stack.begin(); it != stack.end(); ++it)
		std::cout << *it << std::endl;



	return (0);

}