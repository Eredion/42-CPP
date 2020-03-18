#include "Brain.hpp"

	Brain::Brain()
{
	std::stringstream str;

	str << this;
	ptr = str.str();
}

std::string	Brain::identify()
{
	return(this->ptr);
}

	Brain::~Brain()
{
	return ;
}


