#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {

	public :
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		Span operator[](int index);
		~Span();

		void addNumber(int x);

		int getSize() const;
		std::vector<int> getTab() const;

		class VecTooSmall : public std::exception {
			const char *what() const throw() { return "Exception : Vector too small for add a new number !";}
		};

	private :
		Span();
		std::vector<int> _tab;
		unsigned int _size;

};

std::ostream& operator<<(std::ostream& f, const Span& s);

#endif 