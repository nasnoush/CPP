#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe p;
	try
	{
		if (ac > 2)
		{
			p.parseInput(ac, av);
			p.vectSort();
			p.dequSort();
		}
		else
			throw "./PmergeMe [1 2 3 4 5 6]";
	}
	catch(const char *msgError)
	{
		std::cerr << "Error: " << msgError << '\n';
	}
	return 0;
}

