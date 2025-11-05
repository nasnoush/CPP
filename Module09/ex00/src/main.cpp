#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}

	BitcoinExchange btc;

	btc.extractInfo("data.csv");
	btc.applyChange(av[1]);

	return (0);
}


// int main(int ac, char **av)
// {
// 	(void)ac;
// 	(void)av;
// 	// if (ac != 2)
// 	// {
// 	// 	std::cout << "Error: could not open file." << std::endl;
// 	// 	return (0);
// 	// }

// 	// BitcoinExchange btc;

// 	// btc.extractInfo(av[1]);

// 	std::map<int, int> m;

// 	m[1] = 1;
// 	m[2] = 2414;
// 	m[2] = 5;
// 	m[3] = 3;

	
// 	std::map<int, int>::iterator ite = m.end();
// 	std::map<int, int>::iterator it;

// 	for (it = m.begin(); it != ite; ++it)
// 		std::cout << it->first << std::endl;

// 	std::cout << std::endl;
// 	std::cout << m[2] << std::endl;
// 	return (0);
// }