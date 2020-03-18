#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Human
{
	public:
	~Human();
	Brain		brain;
	std::string identify();
	Brain		getBrain();
};

#endif
