#include "../includes/Span.hpp"

int main(void)
{
	Span test(5);
	Span limit(10);

	test.addNumber(1);
	test.addNumber(2);
	test.addNumber(5);
	test.addNumber(1);
	limit = test;

	std::cout << test.shortestSpan() << std::endl;
	
	return (0);	
}
