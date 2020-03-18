#include "Weapon.hpp"

Weapon::~Weapon()
{
	return;
}

void	Weapon::setType(std::string str)
{
	this->type = str;
	return ;
}

std::string const	Weapon::getType()
{
	return(this->type);
}

	Weapon::Weapon(std::string str)
{
	this->type = str;
}
