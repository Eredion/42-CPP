#include "iter.cpp"

void	print(char const &c)
{
	std::cout << c << std::endl;
}

int main(void)
{
	char arr[3] = {'a', 'b', 'c'};

	iter(arr, 3, print);
}
