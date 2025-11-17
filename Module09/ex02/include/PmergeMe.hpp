#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <limits.h>
#include <exception>

class PmergeMe {

	public :
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		std::deque<int> getTabDeque();
		std::vector<int> getTabVect();


		bool isNumber(std::string input);
		void parseInput(int ac, char **av);

		void vectSort();
		void dequSort();

		void sort2Nbr(int &a, int &b);
		bool vectIsSorted(std::vector<int> vTab);

		int binaryInsertion(int &value, std::vector<int> &vTab);
		std::vector<int> orderJacobsthal();




	private :
		std::deque<int> _tabDeque;
		std::vector<int> _tabVect;
};

#endif