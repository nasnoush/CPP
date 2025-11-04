#include "../include/BitcoinExchange.hpp"

void BitcoinExchange::extractInfo(std::string file)
{
	std::ifstream f(file);

	std::string tmp;

	while (std::getline(f, tmp))
		std::cout << tmp;

	f.close();
}