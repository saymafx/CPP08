#pragma once

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator	easyfind(T &container, int num) {
	return std::find(container.begin(), container.end(), num);
}
