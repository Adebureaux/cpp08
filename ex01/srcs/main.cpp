#include "../includes/Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(50);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(25);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp(10000);
		std::vector<int> v(10000);
		std::generate(v.begin(), v.end(), std::rand);
		
		sp.addRangeNumbers(v.begin(), v.end());
		sp.printSpan();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try
		{
			sp.addNumber(1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span sp(0);
		try { std::cout << sp.shortestSpan() << std::endl; }
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
		try { std::cout << sp.longestSpan() << std::endl; }
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	return (0);	
}
