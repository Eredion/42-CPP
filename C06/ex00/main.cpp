# include <iostream>
# include <string>
# include <climits>
# include <math.h>

int		exceptions(std::string str)
{
	std::string	exceptions[8]
		{"nan","nanf","inf","-inf","+inf","nanf","-nanf","+nanf"};

	for (int i = 0; i < 8; i++)
	{
		if (str == exceptions[i])
		{
			std::cout << "char: Impossible" << std::endl;
			std::cout << "int: Impossible" << std::endl;
			return (0);
		}
	}
	return (1);
}

void	char_int_conversion(char *str)
{
	long int d;

	if (exceptions(str) == 0)
		return ;
	d = atol(str);
	if (d < CHAR_MIN || d > CHAR_MAX)
		std::cout << "char: Impossible" << std::endl;
	else if (d > 32 && d < 127)
		std::cout<<"char: "<<(char)d<<std::endl;
	else
		std::cout<<"char: Non displayable\n";
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout<<"int: "<<d<<std::endl;
}

void	float_conversion(char *str)
{
	float f;

	f = atof(str);
	if (f - (int)f == 0)
		std::cout<<"float: "<<f<<".0f\n";
	else
		std::cout<<"float: "<<f<<"f\n";
}

void	double_conversion(char *str)
{
	double d;

	d = atof(str);
	if (d - (int)d == 0)
		std::cout<<"double: "<<d<<".0\n";
	else
		std::cout<<"double: "<<d<<"\n";
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout<<"Wrong number of arguments\n";
		return (0);
	}
	char_int_conversion(argv[1]);
	float_conversion(argv[1]);
	double_conversion(argv[1]);
}
