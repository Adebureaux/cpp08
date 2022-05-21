#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack &other)
	{
		(void)other;
	};
	MutantStack &operator=( MutantStack &other)
	{
		(void)other;
	};
	~MutantStack() {};
};

#endif
