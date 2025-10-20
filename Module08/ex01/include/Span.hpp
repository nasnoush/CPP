#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {

	public :
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber() const;

		class VecTooSmall() : public std::exception {
			const char *what() throw { return "Exception : Vector too small for add a new number !";}
		};

	private :
		Span();
		std::vector<int> _tab;
		int _size;

};

#endif 