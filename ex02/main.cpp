#include "MutantStack.cpp"
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(2);
	mstack.push(7);
	mstack.push(234);

	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite) {
		std::cout << *it << std::endl;
		++it; 
	}

	std::stack<int> s(mstack);

	return 0;
}
