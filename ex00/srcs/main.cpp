#include "../includes/easyfind.hpp"

#define MAX_VAL 500

int main(int ac, char **av)
{
	int find;

	if (ac != 2)
		std::cout << av[0] << ": need one argument, a number between 1 and " << MAX_VAL << std::endl;
	else if ((find = std::atoi(av[1])) < 1 || find > MAX_VAL)
		std::cout << av[0] << ": the number is not between 1 and " << MAX_VAL << std::endl;
	else
	{
		std::vector<int> numbers(MAX_VAL);
		std::srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
			numbers[i] =  (std::rand() % 500) + 1;
		easyfind(numbers, find);
		return (0);
	}
	return (1);
}
