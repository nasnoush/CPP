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

Span Span::operator[](int index)
{
	return (_tab[index]);
}

Span::~Span()
{

}

int Span::getSize() const
{
	return _size;
}

std::vector<int> Span::getTab() const
{
	return _tab;
}

void Span::addNumber(int x) 
{
	if (_tab.size() < _size)
		_tab.push_back(x);
	else
		throw VecTooSmall();
}

std::ostream& operator<<(std::ostream& f, const Span& s)
{
	for (int i = 0; i < s.getSize(); i++)
		f << s.getTab()[i] << " ";
	return f;
}