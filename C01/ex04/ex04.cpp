#include <iostream>

int		main(void)
{
	std::string	str;
	std::string *ptr;
	std::string ref;

	str = "HI THIS IS BRAIN";
	ptr = &str;
	ref = *ptr;
	std::cout << "Initial string: " << str << std::endl;
	std::cout << "Pointer:        " << *ptr << std::endl;
	std::cout << "Reference:      " << ref << std::endl;
}
