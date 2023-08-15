#include "Span.hpp"

Span::Span() {
	_size = 0;
	_ptrVec = new std::vector<int>;
}

Span::Span(const unsigned int num) {
	_size = num;
	_ptrVec = new std::vector<int>;
}

Span::Span(const Span &cpy) {
	_size = cpy.getSize();
}

unsigned int	Span::getSize() {
	return _size;
}

Span::~Span() {
	delete _ptrVec;
}

void	Span::addNumber(const int num) {
	if (_size > _ptrVec->size()) {
		_ptrVec->push_back(num);
	}
	// ELSE THROW EXCEPTION
}

int 	Span::shortestSpan() {
	std::vector<int> tmp = std::vector<int>(_ptrVec->begin(), _ptrVec->end());
	std::nth_element(tmp.begin(), tmp.begin() + 1, tmp.end());
	int smallest2 = *(tmp.begin() + 1);
	std::nth_element(tmp.begin(), tmp.begin(), tmp.end());
	int smallest = *(tmp.begin());
	return smallest2 - smallest;
}

int	Span::longestSpan() {
	std::vector<int> tmp = std::vector<int>(_ptrVec->begin(), _ptrVec->end());
	std::nth_element(tmp.begin(), tmp.begin(), tmp.end(), std::greater<int>());
	int biggest = *(tmp.begin());
	std::nth_element(tmp.begin(), tmp.begin(), tmp.end());
	int smallest = *(tmp.begin());
	return biggest - smallest;
} 
