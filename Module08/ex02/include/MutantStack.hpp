#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <vector>

template <typename T> 
class MutantStack : public std::stack<T> {

	public :

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;



		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;


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
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()

{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const 
{ 
	return this->c.begin(); 
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const 
{ 
	return this->c.end(); 
}


#endif