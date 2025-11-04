#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)av;
	(void)ac;
	

	// if (ac != 3)
	// {
	// 	std::cout << "Error: could not open file." << std::endl;
	// 	return (0);
	// }

	BitcoinExchange btc;

	btc.extractInfo(av[2]);

	// faire check si le fichier fonctionne dans la fonction

	return (0);
}