#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanA
{
	public:
	HumanA(std::string str, Weapon& weap);
	~HumanA(void);
	std::string	name;
	Weapon&		weap;
	void		attack();
};

#endif
