#include "../include/BitcoinExchange.hpp"

void BitcoinExchange::extractInfo(std::string file)
{
	file = "2001-08-19 | 59";
	std::string tmp;

	std::stringstream ss(file);


	while (std::getline(ss, tmp, '|'))
		std::cout << tmp << std::endl;
}