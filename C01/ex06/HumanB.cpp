#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his ";
	std::cout << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}

	HumanB::~HumanB()
{
	return ;
}

	HumanB::HumanB(std::string str): name(str)
{
	return ;
}
