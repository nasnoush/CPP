#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
	(void)ac;

	PmergeMe p;

	for (int i = 1; i < ac; i++)
	{
		if (p.isNumber(av[i]) == false)
		{
			std::cout << av[i] << " pas bon" << std::endl;
		}
		else
			std::cout << av[i] << " c bon" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "nb arg : " << ac - 1 << std::endl;


	return 0;
}