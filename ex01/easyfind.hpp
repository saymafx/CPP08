#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

template <typename T>
typename T::iterator	easyfind(T &container, int num) {
	return std::find(container.begin(), container.end(), num);
}