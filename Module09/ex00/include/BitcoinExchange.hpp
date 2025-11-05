#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string> 
#include <fstream>
#include <map>

class BitcoinExchange {

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		void extractInfo(std::string file);
		void applyChange(std::string input);

	private:
		std::string _date;
		float	_valueofbtc;
		std::map<std::string, float> _tab;

		std::vector<std::pair<std::string, float> > _inputTab;
		std::string _inputDate;
		float _inputValue;
};


#endif