#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

// PmergeMe::PmergeMe(const PmergeMe& other)
// {

// }

// PmergeMe& PmergeMe::operator=(const PmergeMe& other)
// {

// }

bool PmergeMe::isNumber(std::string input)
{
	if (input.empty())
		return false;
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}

PmergeMe::~PmergeMe()
{

}


