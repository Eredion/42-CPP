
#include <iostream>

int main(int n, char **argv)
{
	if (n == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (n > 1)
	{
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; argv[i][j] != 0; j++)
				std::cout << (char)std::toupper(argv[i][j]);
		}
		std::cout << "\n";
	}
	return 0;
}
