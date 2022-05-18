#include "../includes/Span.hpp"

Span::Span(const unsigned int N) : _N(N), _current(0) {}

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

int Span::shortestSpan(void)
{
	return (1);
}

int Span::longestSpan(void)
{
	return (1);
}

char const *Span::SpanOverflow::what() const throw()
{
	return ("span overflow");
}
