#include "../include/Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int n)
{
	_size = n;
	_tab[_size];
}

Span::Span(const Span& other)
{
	_tab = _tab[other._size];
	for (int i = 0; i < _size; i++)
		_tab[i] = other._tab[i];
}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_tab = _tab[other._size];
		for (int i = 0; i < _size; i++)
			_tab[i] = other._tab[i];
	}
	return (*this);
}

Span::~Span()
{

}

void Span::addNumber(int x) const
{
	// mettre condition ici pour throw si j essaye d ajouter mais que je depasse size
	if ()
		_tab.push_back(x);
	else
		throw VecTooSmall();
}