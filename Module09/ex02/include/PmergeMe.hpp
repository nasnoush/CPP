#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {

	public :
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		void vectSort();
		void dequSort();

		void makePairs(int tab);



	private :
		std::deque<int> _tabDeque;
		std::vector<int> _tabVect;
};

#endif