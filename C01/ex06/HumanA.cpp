#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his ";
	std::cout << this->weap.getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon& weap): name(str), weap(weap)
{
	return;
}

HumanA::~HumanA(void)
{
    return ;
}
