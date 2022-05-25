#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

template <typename T>
void easyfind(T & container, int n)
{
	std::vector<int>::iterator itr = std::find(container.begin(), container.end(), n);
	if (itr != container.end())
		std::cout << "Element " << n << " is present at index " << itr - container.begin() << " in the given container" << std::endl;
	else
		std::cout << "Element " << n << " is not present in the given container" << std::endl;
}

#endif
