#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	_valueofbtc = 0.0;
	_date = "";

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	_valueofbtc = other._valueofbtc;
	_date = other._date;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		_valueofbtc = other._valueofbtc;
		_date = other._date;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{

}

void BitcoinExchange::extractInfo(std::string file)
{
	std::ifstream f(file);

	std::string tmp;

	while (std::getline(f, tmp))
		std::cout << tmp << std::endl;

	f.close();
}

// split chaque element et les mettres dans les variables correspondante
// puis les ajouter dans la std::map avec une fonction de push
// faire toutes les verifs possible