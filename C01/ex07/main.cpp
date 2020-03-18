# include <iostream>
# include <fstream>
# include <string>

int		main(int argc, char **argv)
{
	if (argc != 4 || argv[2] == NULL || argv[3] == NULL || argv[1] == NULL)
	{
		std::cout << "ERROR: invalid arguments \n";
		return (0);
	}

	std::ifstream src(argv[1]);

	if (src.fail())
	{
		std::cout << "ERROR: opening file error" << std::endl;
		return (0);
	}

	std::ofstream dst("src.replace");
	if (dst.fail())
	{
		std::cout << "ERROR: creating file error" << std::endl;
		return (0);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buff;
	int pos;

	while (getline(src, buff))
	{	if ((pos = buff.find(s1)) != (int)std::string::npos)
			buff.replace(pos, s1.length(), s2);
		dst << buff;
		dst << std::endl;
	}
	src.close();
	dst.close();
	return (0);
}

