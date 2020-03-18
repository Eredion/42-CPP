#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	public:
	~Pony();
	std::string	name;
	std::string color;
	std::string	age;
	void	pony_name(std::string str);
	void	pony_color(std::string str);
	void	pony_age(std::string str);
	void	pony_print();
};

#endif
