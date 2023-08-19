#include "easyfind.hpp"
#include <list>

int main(void) {
	std::list<int> lst;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(19);
	lst.push_back(4);
	lst.push_back(87);

	std::cout << *(easyfind(lst, 4)) << std::endl;
	std::cout << *(easyfind(lst, 87)) << std::endl;
	std::cout << *(easyfind(lst, 1)) << std::endl;
	return 0;
}
