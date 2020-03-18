#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
	Weapon(std::string str);
	~Weapon();
	void	setType(std::string str);
	std::string const getType();

	private:
	std::string type;
};

#endif
