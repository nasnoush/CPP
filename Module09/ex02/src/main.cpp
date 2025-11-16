#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
	(void)ac;

	PmergeMe p;
	
	try
	{
		if (ac > 2)
		{
			p.parseInput(ac, av);

			std::cout << "Before: ";
			for (unsigned int i = 0; i < p.getTabVect().size(); i++)
			std::cout << p.getTabVect()[i] << " ";

			// p.vectSort();
			// std::cout << std::endl << "After: ";
			// for (unsigned int i = 0; i < p.getTabVect().size(); i++)
			// std::cout << p.getTabVect()[i] << " ";

			p.vectSort();
		}
		else
		{
			throw "./PmergeMe [1 2 3 4 5 6]";
		}
	}
	catch(const char *msgError)
	{
		std::cerr << "Error: " << msgError << '\n';
	}
	
	// for (unsigned int i = 0; i < p.getTabVect().size(); i++)
	// 	std::cout << p.getTabVect()[i] << std::endl;
	


	return 0;
}

// tout metre dans un try catch et throw tout ou std::cerr