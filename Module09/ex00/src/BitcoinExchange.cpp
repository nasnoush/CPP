#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	_valueofbtc = 0.0;
	_date = "";
	_inputDate = "";
	_inputValue = 0.0;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	_valueofbtc = other._valueofbtc;
	_date = other._date;
	_inputDate = other._inputDate;
	_inputValue = other._inputValue;
	_tab = other._tab;
	_inputTab = other._inputTab;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		_valueofbtc = other._valueofbtc;
		_date = other._date;
		_inputDate = other._inputDate;
		_inputValue = other._inputValue;
		_tab = other._tab;
		_inputTab = other._inputTab;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{

}

void BitcoinExchange::extractInfo(std::string file)
{
	std::ifstream f(file.c_str());

	if (!f.is_open())
	{
		std::cerr << "Error: could not open file " << file << std::endl;
		return;
	}
	std::string tmp;
	std::string del = ",";
	std::string price;

	while (std::getline(f, tmp))
	{
		unsigned long pos = tmp.find(del);

		if (tmp == "date,exchange_rate")
			continue;
		if (pos != std::string::npos)
		{
			_date = tmp.substr(0, pos);
			tmp.erase(0, pos + del.length());
			price = tmp.substr(0);
			std::istringstream iss(price);
			iss >> _valueofbtc;
			_tab[_date] = _valueofbtc;
		}
	}
	f.close();
}

bool BitcoinExchange::isValideDate(std::string date)
{
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (date.size() != 10)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	if (year < 2009)
		return false;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
		{	
			if (date[i] != '-')
				return false;
		}
		else
		{	
			if (date[i] < '0' || date[i] > '9')
				return false;
		}
	}
	return true;
}

void BitcoinExchange::applyChange(std::string input)
{
	std::ifstream f(input.c_str());
	if (!f.is_open())
	{
		std::cerr << "Error: could not open file " << input << std::endl;
		return;
	}
	std::string tmp;
	std::string del = "|";
	std::string price;

	while (getline(f, tmp))
	{
		_inputDate.clear();
		_inputValue = 0;

		if (tmp.empty())
			continue;
		if (tmp == "date | value")
			continue;
		if (tmp.find(del) == std::string::npos)
		{
			std::cout << "Error: bad input => " << tmp << std::endl;
			continue;
		}
		unsigned long pos = tmp.find(del);
		if (pos != std::string::npos)
		{
			_inputDate = tmp.substr(0, pos);
			_inputDate.erase(0, _inputDate.find_first_not_of(" \t"));
			_inputDate.erase(_inputDate.find_last_not_of(" \t") + 1);
			if (!isValideDate(_inputDate) || _inputDate.size() != 10)
			{
				std::cout << "Error: bad input => " << _inputDate << std::endl;
    			continue;
			}
			tmp.erase(0, pos + del.length());
			price = tmp.substr(0);
			price.erase(0, price.find_first_not_of(" \t"));
			price.erase(price.find_last_not_of(" \t") + 1);
			if (price.empty())
			{
				std::cout << "Error: bad input price in this date => " << _inputDate << std::endl;
				continue;
			}
			std::istringstream iss(price);
			iss >> _inputValue;
		}

		if (_inputValue < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (_inputValue > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		_inputTab.push_back(std::make_pair(_inputDate, _inputValue));


		if (_tab.empty())
    		continue;
		std::map<std::string, float>::iterator it = _tab.lower_bound(_inputDate);
		if (it != _tab.end() && it->first == _inputDate)
				std::cout << _inputDate << " => " << _inputValue << " = " << it->second * _inputValue << std::endl;
		else
		{
			if (it == _tab.begin())
    			continue;
			if (it == _tab.end())
				it--;
			else
				it--;
			std::cout << _inputDate << " => " << _inputValue << " = " << _inputValue * it->second << std::endl;
		}
	}
	f.close();
}
