#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

template <typename T> 
class MutantStack : public std::stack<T> {

	public :

		typedef std::deque<T>::iterator it;

		it begin();
		it end();
		// it begin() const;
		// it end() const;


		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();

	private :

};

template <typename T>
MutantStack<T>::MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other)
{
	this->c = other.c;
}
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	if (this != &other)
		this->c = other.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}
template <typename T>
MutantStack<T>::it begin()
{
	return (this->c.begin());
}
template <typename T>
MutantStack<T>::it end()
{
	return (this->c.end());
}

// template <typename T>
// it MutantStack<T>::begin() const
// {
// 	return (c.begin());
// }
// template <typename T>
// it MutantStack<T>::end() const
// {
// 	return (c.end());
// }

#endif