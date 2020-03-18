#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
	public:
	Brain();
	~Brain();
	int	age;
	std::string identify();
	private:
	std::string	ptr;
};

#endif
