#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <limits.h>
#include <exception>
#include <algorithm>
#include <sstream>
#include <ctime>

class PmergeMe {

	public :
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		std::deque<int> getTabDeque();
		std::vector<int> getTabVect();


		bool isNumber(std::string &input);
		void parseInput(int ac, char **av);
		void sort2Nbr(int &a, int &b);

		// Pour vector
		void vectSort();

		bool vectIsSorted(std::vector<int> &vTab);

		int binaryInsertion(int &value, std::vector<int> &vTab);
		unsigned int Jacobsthal(unsigned int n);
		std::vector<int> orderJacobsthal(std::vector<int> &insertTab);

		// Pour deque
		void dequSort();

		bool dequeIsSorted(std::deque<int> &vTab); 

		int binaryInsertionD(int &value, std::deque<int> &dTab);  // le D a la pour differencier
		unsigned int JacobsthalD(unsigned int n); // le D a la pour differencier
		std::deque<int> orderJacobsthalD(std::deque<int> &insertTab);




	private :
		std::deque<int> _tabDeque;
		std::vector<int> _tabVect;
};

#endif