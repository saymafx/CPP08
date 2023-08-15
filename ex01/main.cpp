#include "easyfind.hpp"

int main () {
	std::vector<int> vec;
	vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
	std::vector<int>::iterator it = easyfind(vec, 4);
	if (it != vec.end()) {
        std::cout << "Found element: " << *it << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};
	std::array<int, 6>::iterator it1 = easyfind(arr, 2);
	if (it1 != arr.end()) {
        std::cout << "Found element: " << *it1 << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}