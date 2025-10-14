/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadahman <nadahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:02:12 by nadahman          #+#    #+#             */
/*   Updated: 2025/10/14 13:09:27 by nadahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <ctime>
#include <cstdlib>


template <typename T> class Array {

	public :
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		T& operator[](const unsigned int i);
		~Array();
		
		unsigned int size() const;
		
		class BadRange : public std::exception {
			const char *what() const throw() { return "Exception : Bad range"; }
		};
		
	private :
	
		T *_tab;
		unsigned int _size;
};

template <typename T> 
Array<T>::Array()
{
	_size = 0;
	_tab = NULL;
}

template <typename T> 
Array<T>::Array(unsigned int n)
{
	_size = n;
	_tab = new T[n];
	
	for (unsigned int i = 0; i < n; i++)
		_tab[i] = T();
}

template <typename T>
Array<T>::Array(const Array& other)
{
	_tab = new T[other._size];
	_size = other._size;
	for (unsigned int i = 0; i < _size; i++)
		_tab[i] = other._tab[i];
}

template <typename T> 
T& Array<T>::operator[](const unsigned int i)
{
	if (i >= _size)
		throw BadRange();
	else
		return (_tab[i]);
	
}

template <typename T> 
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _tab;
		_tab = new T[other._size];
		_size = other._size;
		
		for (unsigned int i = 0; i < _size; i++)
			_tab[i] = other._tab[i];
	}
	return (*this);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _tab;
}







#endif