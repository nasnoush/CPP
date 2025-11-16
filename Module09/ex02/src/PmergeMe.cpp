#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	_tabDeque = other._tabDeque;
	_tabVect = other._tabVect;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		_tabDeque = other._tabDeque;
		_tabVect = other._tabVect;
	}
	return (*this);
}

std::deque<int> PmergeMe::getTabDeque()
{
	return _tabDeque;
}
		
std::vector<int> PmergeMe::getTabVect()
{
	return _tabVect;
}

bool PmergeMe::isNumber(std::string input)
{

	std::string max = "2147483647";
	if (input.empty())
		return false;

	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (!isdigit(input[i]))
			return false;
	}
	if (input.length() > 10)
		return false;
	if (input.length() == 10)
	{
		for (int idx = 0; idx < 10; idx++)
		{
			if (input[idx] > max[idx])
				return false;
			else if (input[idx] < max[idx])
				break ;
		}
	}
	return true;
}

void PmergeMe::parseInput(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		std::string arg = av[i];

		if (isNumber(arg) == false)
		{
			std::cerr << "Error: Invalid number => " << arg << std::endl;
			exit(1);
		}
		long value = std::stol(arg);

		if (value < 0 || value > INT_MAX)
		{
			std::cerr << "Error: Bad range => " << arg << std::endl;
			exit(1);
		}

		_tabDeque.push_back(static_cast<int>(value));
		_tabVect.push_back(static_cast<int>(value));
	}
}

void PmergeMe::sort2Nbr(int &a, int &b)
{
	int tmp;
	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
}

bool PmergeMe::vectIsSorted(std::vector<int> vTab)
{
	for (unsigned int i = 0; i < vTab.size() - 1; i++)
	{
		if (vTab[i] > vTab[i + 1])
			return false;
	}
	return true;
}

int PmergeMe::binaryInsertion(int &value, std::vector<int> &vTab)
{
	int left = 0;
	int right = vTab.size();
	int mid;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (vTab[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	return left;
}


void PmergeMe::vectSort()
{
	// mettre le calcul du temops surement

	std::vector<int> lead; // element les + grands
	std::vector<int> insert; // les + petits que je vais inserer apres
	int impair = 0;

	if (_tabVect.size() < 2)
	{
		std::cerr << "Error: Tab too small !" << std::endl;
		return ;
	}
	else
	{
		if (_tabVect.size() % 2 != 0)
			impair = _tabVect.back();
		for (unsigned int i = 0; i < _tabVect.size() - 1; i = i + 2)
		{
			if (_tabVect[i] > _tabVect[i + 1])
			{	
				lead.push_back(_tabVect[i]);
				insert.push_back(_tabVect[i + 1]);
			}
			else
			{				
				lead.push_back(_tabVect[i + 1]);
				insert.push_back(_tabVect[i]);
			}
		}
	}

	// DEBUG
	std::cout << std::endl << "Lead: ";
	for (unsigned int i = 0; i < lead.size(); i++)
		std::cout << lead[i] << " ";

	std::cout << std::endl << "insert: ";
	for (unsigned int i = 0; i < insert.size(); i++)
		std::cout << insert[i] << " ";

	std::cout << std::endl << "Impair: ";
	std::cout << impair << " ";

	// Trie de lead
	std::sort(lead.begin(), lead.end());

	int pos = binaryInsertion(insert[0], lead);
	lead.insert(lead.begin() + pos, insert[0]);

	std::cout << std::endl << "Lead trie ";
	for (unsigned int i = 0; i < lead.size(); i++)
		std::cout << lead[i] << " ";
	// DEBUG


	
	


}

PmergeMe::~PmergeMe()
{

}


// si une erreur vient de parse input ou is number, quitter tout avec exit