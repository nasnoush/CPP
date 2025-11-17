#include "../include/PmergeMe.hpp"

int start;
int stop;

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
	start = clock();

	for (int i = 1; i < ac; i++)
	{
		std::string arg = av[i];

		if (isNumber(arg) == false)
		{
			std::cerr << "Error: Invalid number => " << arg << std::endl;
			exit(1);
		}
		std::istringstream iss(arg);

		long value;
		iss >> value;

		if (value < 0 || value > INT_MAX)
		{
			std::cerr << "Error: Bad range => " << arg << std::endl;
			exit(1);
		}

		_tabDeque.push_back(static_cast<int>(value));
		_tabVect.push_back(static_cast<int>(value));
	}
	std::cout << "Before: ";
	for (unsigned int i = 0; i < _tabVect.size(); i++)
		std::cout << _tabVect[i] << " ";

	// std::cout << "Before deque: ";
	// for (unsigned int i = 0; i < _tabDeque.size(); i++)
	// 	std::cout << _tabDeque[i] << " ";
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

// Vector

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

unsigned int PmergeMe::Jacobsthal(unsigned int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return (Jacobsthal(n - 1) + 2 * Jacobsthal(n -2));
}

std::vector<int> PmergeMe::orderJacobsthal(std::vector<int> insertTab)
{
	std::vector<int> jacVect;
	unsigned int n = 0;

	while (Jacobsthal(n) <= insertTab.size() - 1)
	{
		std::vector<int>::iterator pos = std::find(jacVect.begin(), jacVect.end(), Jacobsthal(n));
		if (pos == jacVect.end())
			jacVect.push_back(Jacobsthal(n));
		n++;
	}

	for (unsigned int i = 0; i < insertTab.size(); i++)
	{
		std::vector<int>::iterator it = std::find(jacVect.begin(), jacVect.end(), i);
		if (it == jacVect.end())
			jacVect.push_back(i);
	}
	return jacVect;
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
	// std::cout << std::endl << "Lead: ";
	// for (unsigned int i = 0; i < lead.size(); i++)
	// 	std::cout << lead[i] << " ";

	// std::cout << std::endl << "insert: ";
	// for (unsigned int i = 0; i < insert.size(); i++)
	// 	std::cout << insert[i] << " ";

	// std::cout << std::endl << "Impair: ";
	// std::cout << impair << " ";
	// DEBUG

	// Trie de lead et insertion pas zappe de mettre les fonctions ici
	std::sort(lead.begin(), lead.end());

	std::vector<int> jacobVect = orderJacobsthal(insert);
	for (unsigned int i = 0; i < jacobVect.size(); i++)
	{
		int idx = jacobVect[i];
		int val = insert[idx];
		int pos = binaryInsertion(val, lead);
		lead.insert(lead.begin() + pos, val);
	}
	if (impair != 0)
	{	
		int pos = binaryInsertion(impair, lead);
		lead.insert(lead.begin() + pos, impair);
	}


	// suppression de tout les elemnts du tab de base et j'ajoute tout ceux de lead si c'est trie dans le vect de base
	if (vectIsSorted(lead))
	{
		_tabVect.erase(_tabVect.begin(), _tabVect.end());

		for (unsigned int i = 0; i < lead.size(); i++)
			_tabVect.push_back(lead[i]);
	}
	else
	{
		std::cout << "Error: Problem with the sort" << std::endl;
		return ;
	}

	// DEBUG
	// std::cout << std::endl << "Lead trie: ";
	// for (unsigned int i = 0; i < lead.size(); i++)
	// 	std::cout << lead[i] << " ";

	// std::cout << std::endl << "Jacob : ";
	// for (unsigned int i = 0; i < jacobVect.size(); i++)
	// 	std::cout << jacobVect[i] << " ";
	// DEBUG

	std::cout << std::endl << "After: ";
	for (unsigned int i = 0; i < _tabVect.size(); i++)
		std::cout << _tabVect[i] << " ";


	stop = clock() - start;
	std::cout << std::endl << "Time to process a range of  " << _tabVect.size() << " elements with std::vector<int> : " <<(double)stop / 1000 << std::endl;


}

// DEQUE

bool PmergeMe::dequeIsSorted(std::deque<int> vTab)
{
	for (unsigned int i = 0; i < vTab.size() - 1; i++)
	{
		if (vTab[i] > vTab[i + 1])
			return false;
	}
	return true;
}

int PmergeMe::binaryInsertionD(int &value, std::deque<int> &dTab)
{
	int left = 0;
	int right = dTab.size();
	int mid;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (dTab[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	return left;
}

unsigned int PmergeMe::JacobsthalD(unsigned int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return (Jacobsthal(n - 1) + 2 * Jacobsthal(n -2));
}

std::deque<int> PmergeMe::orderJacobsthal(std::deque<int> insertTab)
{
	std::deque<int> jacDeque;
	unsigned int n = 0;

	while (Jacobsthal(n) <= insertTab.size() - 1)
	{
		std::deque<int>::iterator pos = std::find(jacDeque.begin(), jacDeque.end(), Jacobsthal(n));
		if (pos == jacDeque.end())
			jacDeque.push_back(Jacobsthal(n));
		n++;
	}

	for (unsigned int i = 0; i < insertTab.size(); i++)
	{
		std::deque<int>::iterator it = std::find(jacDeque.begin(), jacDeque.end(), i);
		if (it == jacDeque.end())
			jacDeque.push_back(i);
	}
	return jacDeque;
}

void PmergeMe::dequSort()
{
	// mettre le calcul du temops surement

	std::deque<int> lead; // element les + grands
	std::deque<int> insert; // les + petits que je vais inserer apres
	int impair = 0;

	if (_tabDeque.size() < 2)
	{
		std::cerr << "Error: Tab too small !" << std::endl;
		return ;
	}
	else
	{
		if (_tabDeque.size() % 2 != 0)
			impair = _tabDeque.back();
		for (unsigned int i = 0; i < _tabDeque.size() - 1; i = i + 2)
		{
			if (_tabDeque[i] > _tabDeque[i + 1])
			{	
				lead.push_back(_tabDeque[i]);
				insert.push_back(_tabDeque[i + 1]);
			}
			else
			{				
				lead.push_back(_tabDeque[i + 1]);
				insert.push_back(_tabDeque[i]);
			}
		}
	}
	// DEBUG
	// std::cout << std::endl << "Lead: ";
	// for (unsigned int i = 0; i < lead.size(); i++)
	// 	std::cout << lead[i] << " ";

	// std::cout << std::endl << "insert: ";
	// for (unsigned int i = 0; i < insert.size(); i++)
	// 	std::cout << insert[i] << " ";

	// std::cout << std::endl << "Impair: ";
	// std::cout << impair << " ";
	// DEBUG

	// Trie de lead et insertion pas zappe de mettre les fonctions ici
	std::sort(lead.begin(), lead.end());

	std::deque<int> jacobDeque = orderJacobsthal(insert);
	for (unsigned int i = 0; i < jacobDeque.size(); i++)
	{
		int idx = jacobDeque[i];
		int val = insert[idx];
		int pos = binaryInsertionD(val, lead);
		lead.insert(lead.begin() + pos, val);
	}
	if (impair != 0)
	{	
		int pos = binaryInsertionD(impair, lead);
		lead.insert(lead.begin() + pos, impair);
	}

	// suppression de tout les elemnts du tab de base et j'ajoute tout ceux de lead si c'est trie dans le vect de base
	if (dequeIsSorted(lead))
	{
		_tabDeque.erase(_tabDeque.begin(), _tabDeque.end());

		for (unsigned int i = 0; i < lead.size(); i++)
			_tabDeque.push_back(lead[i]);
	}
	else
	{
		std::cout << "Error: Problem with the sort" << std::endl;
		return ;
	}

	// DEBUG
	// std::cout << std::endl << "Lead trie: ";
	// for (unsigned int i = 0; i < lead.size(); i++)
	// 	std::cout << lead[i] << " ";

	// std::cout << std::endl << "Jacob : ";
	// for (unsigned int i = 0; i < jacobVect.size(); i++)
	// 	std::cout << jacobVect[i] << " ";
	// DEBUG

	// std::cout << std::endl << "After deque: ";
	// for (unsigned int i = 0; i < _tabDeque.size(); i++)
	// 	std::cout << _tabDeque[i] << " ";

	stop = clock() - start;
	std::cout << "Time to process a range of  " << _tabDeque.size() << " elements with std::deque<int> : " <<(double)stop / 1000 << std::endl;

}



PmergeMe::~PmergeMe()
{

}