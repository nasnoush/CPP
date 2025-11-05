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
	f.close();
}

void BitcoinExchange::applyChange(std::string input)
{
	std::ifstream f(input.c_str());

	std::string tmp;
	std::string del = "|";
	std::string price;

	while (getline(f, tmp))
	{
		unsigned long pos = tmp.find(del);
		while (pos != std::string::npos)
		{
			_inputDate = tmp.substr(0, pos);
			tmp.erase(0, pos + del.length());
			price = tmp.substr(0, '\n');
			std::istringstream iss(price);
			iss >> _inputValue;
			pos = tmp.find(del);
		}

		// mettre les verifs ici normalement
		// - bon format de la date
		// - float positif entre 0 et 1000
		// - 

		_inputTab[0].first = _inputDate;
		_inputTab[0].second = _inputValue;

		std::cout << _inputTab[0].first << std::endl;
	}
	f.close();
}


// split chaque element et les mettres dans les variables correspondante
// puis les ajouter dans la std::map avec une fonction de push
// faire toutes les verifs possible