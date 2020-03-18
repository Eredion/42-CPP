#include "Human.hpp"

Brain	Human::getBrain(void)
{
    return (brain);
}

std::string Human::identify(void)
{
    return (brain.identify());
}

	Human::~Human()
{
	return ;
}
