#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <string> 
#include <fstream>

class BitcoinExchange {

	public:
		// BitcoinExchange();
		// BitcoinExchange(const BitcoinExchange &other);
		// BitcoinExchange& operator=(const BitcoinExchange& other);
		// ~BitcoinExchange();

		void extractInfo(std::string file);
		


	private:
		// std::string _date;
		// float	_value;
		// float _nbrofbtc;
		// std::vector<int> _tabofprice;
};


#endif