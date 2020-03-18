#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	~HumanB();
	HumanB(std::string str);
	Weapon		*weapon;
	std::string	name;
	void		setWeapon(Weapon &weapon);
	void		attack();
};

#endif
