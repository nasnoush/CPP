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
	// faire deepcopy des tableaux
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		_valueofbtc = other._valueofbtc;
		_date = other._date;
		// faire deepcopy des tableaux
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

		if (pos != std::string::npos)
		{
			_date = tmp.substr(0, pos);
			tmp.erase(0, pos + del.length());
			price = tmp.substr(0);
			std::istringstream iss(price);
			iss >> _valueofbtc;
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
		if (pos != std::string::npos)
		{
			_inputDate = tmp.substr(0, pos);
			tmp.erase(0, pos + del.length());
			price = tmp.substr(0);
			std::istringstream iss(price);
			iss >> _inputValue;
		}

		// mettre les verifs ici normalement
		// - bon format de la date
		// - float positif entre 0 et 1000
		// - 

		_inputTab.push_back(std::make_pair(_inputDate, _inputValue));

		std::cout << _inputTab.back().first << std::endl;
	}
	f.close();
}



// faire toutes les verifs possible
// tej les espaces de ce que je viens de split pour les comparer