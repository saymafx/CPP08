#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <deque>
#include <stack>


#include <stdlib.h>

#define COUNT (MAX_RAM / (int)sizeof(Buffer))

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack();
		MutantStack( MutantStack<T> const & src );
		~MutantStack();

		MutantStack &		operator=( MutantStack<T> const & rhs );

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

template<typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif