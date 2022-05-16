#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template <typename T>
T & easyfind(T & container, int n)
{
	
	vector<int>::iterator itr = std::find(arr.begin(), arr.end(), n);
	if (itr != end(arr))
	{
		cout << "Element " << n << " is present at index " << distance(arr, itr) << " in the given array";
	}
	else
	{
		cout << "Element is not present in the given array";
	}
	return (NULL);
}

#endif
