#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}

	BitcoinExchange btc;

	btc.extractInfo(av[1]);

	// faire check si le fichier fonctionne dans la fonction

	return (0);
}