#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	protected:
	std::string Name;
	int			AP;
	AWeapon		*weapon;
	public:
	Character();
	Character(std::string const &name);
	~Character();
	Character(Character const &copy);
	Character 	&operator = (const Character &copy);
	std::string getName() const;
	AWeapon		*getWeapon() const;
	int 		getAP() const;
	void		recoverAP();
	void		equip(AWeapon *weapon);
	void		attack(Enemy  *target);
};

std::ostream	&operator << (std::ostream &out, Character const &me);

#endif
