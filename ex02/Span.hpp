#pragma once

#include <iomanip>
#include <vector>
#include <algorithm>


class Span
{
	private:
		std::vector<int>*	_ptrVec;
		unsigned int		_size;
	public:
		Span();
		Span(const unsigned int num);
		Span(const Span &cpy);
		~Span();

		unsigned int getSize();

		Span	&operator=(const Span &rhs);

		void	addNumber(const int num);
		int 	shortestSpan();
		int	longestSpan();
};