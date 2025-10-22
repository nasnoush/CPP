#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iterator>

class Span {

	public :
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		int getSize() const;
		const std::vector<int>& getTab() const;

		void addNumber(int x);
		void addMultNbr(int nb);

		int shortestSpan();
		int longestSpan();

		class VecTooSmall : public std::exception {
			const char *what() const throw() { return "Exception : Vector too small for add a new number !";}
		};

		class WrongSize : public std::exception {
			const char *what() const throw() { return "Exception : Problem with the size of the vector  !";}
		};

		class EmptyStore : public std::exception {
			const char *what() const throw() { return "Exception : Number stored lower to 2 !";}
		};

	private :
		Span();
		std::vector<int> _tab;
		unsigned int _size;

};

std::ostream& operator<<(std::ostream& f, const Span& s);

#endif 