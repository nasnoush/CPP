#include "../include/Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int n)
{
	_size = n;
}

Span::Span(const Span& other)
{
	_tab = other._tab;
	_size = other._size;
}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_tab = other._tab;
		_size = other._size;
	}
	return (*this);
}

Span::~Span()
{

}

int Span::getSize() const
{
	return _size;
}

const std::vector<int>& Span::getTab() const
{
	return (_tab);
}

void Span::addNumber(int x) 
{
	if (_tab.size() < _size)
		_tab.push_back(x);
	else
		throw VecTooSmall();
}

int Span::shortestSpan()
{

	int min = std::abs(getTab()[0] - getTab()[1]);
	if (_tab.size() < 2)
		throw EmptyStore();
	else
	{		
		for (unsigned int i = 0; i < _tab.size(); i++)
		{
			for (unsigned int j = i + 1; j < _tab.size(); j++)
			{
				if (std::abs(getTab()[i] - getTab()[j]) < min)
					min = std::abs(getTab()[i] - getTab()[j]);
				else
					continue;
			}
		}
		return (min);
	}
}

int Span::longestSpan()
{
	int max = std::abs(getTab()[0] - getTab()[1]);
	if (_tab.size() < 2)
		throw EmptyStore();
	else
	{		
		for (unsigned int i = 0; i < _tab.size(); i++)
		{
			for (unsigned int j = i + 1; j < _tab.size(); j++)
			{
				if (std::abs(getTab()[i] - getTab()[j]) > max)
					max = std::abs(getTab()[i] - getTab()[j]);
				else
					continue;
			}
		}
		return (max);
	}
}

std::ostream& operator<<(std::ostream& f, const Span& s)
{
	for (unsigned int i = 0; i < s.getTab().size(); i++)
		f << s.getTab()[i] << " ";
	return f;
}

void Span::addMultNbr(int nb)
{
	if (nb > getSize())
		throw VecTooSmall();
	else
		for (int i = 0; i < nb; i++)
			addNumber(rand() % 100);
}

// void Span::addMultNbr(int nb) // version avec nombre unique
// {
// 	unsigned int d;
// 	if (nb > getSize())
// 		throw VecTooSmall();
// 	else
// 		for (int i = 0; i < nb; i++)
// 		{	
// 			d = 0;
// 			int r = rand() % 100;
// 			while (d < _tab.size())
// 			{	
// 				if (_tab[d] == r)
// 				{	
// 					d = 0;
// 					r = (rand() % 100000);
// 				}
// 				d++;
// 			}
// 			addNumber(r);
// 		}
// }