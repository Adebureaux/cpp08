#include "../includes/Span.hpp"

Span::Span() : _span(std::vector<int>()), _N(100), _current(0) {}

Span::Span(const unsigned int N) : _span(std::vector<int>()), _N(N), _current(0) {}

Span::Span(const Span &other) : _N(other._N)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (other._current > _N)
		throw Span::SpanOverflow();
	_span = other._span;
	_current = other._current;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_current + 1 > _N)
		throw Span::SpanOverflow();
	_span.push_back(n);
	_current++;
}

unsigned int Span::shortestSpan(void)
{
	if (_current < 2)
		throw Span::CannotFindDistance();
	unsigned int shortest = UINT_MAX;
	std::vector<int> sorted(_span);
	std::sort(sorted.begin(), sorted.end());
	std::vector<int>::iterator itr = sorted.begin();
	while (itr + 1 != sorted.end() && shortest)
	{
		if (static_cast<unsigned int>(*(itr + 1) - *(itr)) < shortest)
			shortest = *(itr + 1) - *(itr);
		itr++;
	}
	return (shortest);
}

unsigned int Span::longestSpan(void)
{
	if (_current < 2)
		throw Span::CannotFindDistance();
	std::vector<int> sorted(_span);
	std::sort(sorted.begin(), sorted.end());
	return ((*(sorted.end() - 1) - *(sorted.begin())));
}

char const *Span::SpanOverflow::what() const throw()
{
	return ("span overflow");
}

char const *Span::CannotFindDistance::what() const throw()
{
	return ("cannot find distance");
}
