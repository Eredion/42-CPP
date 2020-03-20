#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	protected:
	std::string Sound;
	std::string	Name;
	int		Ap;
	int		dmg;
	public:
	AWeapon();
	AWeapon(std::string const &name, int Ap, int dmg);
	~AWeapon();
	AWeapon(AWeapon const &copy);
	AWeapon &operator = (const AWeapon &copy);
	std::string getName() const;
	std::string getSound() const;
	int getAPCost() const;
	int getDamage() const;
	void attack() const;
};

#endif
