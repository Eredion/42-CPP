#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int Ap, int dmg)
{
	this->Name = name;
	this->Ap = Ap;
	this->dmg = dmg;
	this->Sound = "* Generic weapon sound *";
}

AWeapon::AWeapon()
{
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator = (const AWeapon &copy)
{
	this->Name = copy.Name;
	this->dmg = copy.dmg;
	this->Ap = copy.Ap;
	return (*this);
}

void	AWeapon::attack() const
{
	std::cout << this->getSound();
}

std::string	AWeapon::getName() const
{
	return (this->Name);
}

std::string	AWeapon::getSound() const
{
	return (this->Sound);
}

int 	AWeapon::getAPCost() const
{
	return (this->Ap);
}

int 	AWeapon::getDamage() const
{
	return (this->dmg);
}

