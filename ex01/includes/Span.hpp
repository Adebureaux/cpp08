#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
	public:
	Span();
	Span(const unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(int n);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);

	class SpanOverflow : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	
	class CannotFindDistance : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	private:
	std::vector<int>			_span;
	const unsigned int			_N;
	unsigned int				_current;
};

#endif
