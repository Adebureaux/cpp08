#include "../includes/Span.hpp"

int main(void)
{
	Span test(5);
	Span limit(10);

	test.addNumber(1);
	test.addNumber(3);
	test.addNumber(299);
	test.addNumber(300);
	limit = test;

	std::cout << test.shortestSpan() << std::endl;
	
	return (0);	
}
