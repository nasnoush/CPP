#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
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
		


	private:
		std::string _date;
		float	_valueofbtc;
		std::map<std::string, float> _tab;
};


#endif