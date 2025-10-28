#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T> 
class MutantStack : public std::stack<T> {

	public :
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();


		 begin() ;
		 end() ;

	private :
};

#endif