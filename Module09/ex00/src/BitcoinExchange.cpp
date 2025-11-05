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
	std::ifstream f(file.c_str());

	std::string tmp;
	std::string del = ",";
	std::string price;

	while (std::getline(f, tmp))
	{
		unsigned long pos = tmp.find(del);

		while (pos != std::string::npos)
		{
			_date = tmp.substr(0, pos);
			tmp.erase(0, pos + del.length());
			price = tmp.substr(0, '\n');
			std::istringstream iss(price);
			iss >> _valueofbtc;
			pos = tmp.find(del);
		}
		
		_tab[_date] = _valueofbtc;
	}
	// std::cout << _tab["2017-12-16"] << std::endl;
	f.close();
}


// split chaque element et les mettres dans les variables correspondante
// puis les ajouter dans la std::map avec une fonction de push
// faire toutes les verifs possible