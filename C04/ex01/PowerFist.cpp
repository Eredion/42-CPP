#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
	this->Sound = "* pschhh... SBAM! *\n";
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist::PowerFist(PowerFist const &copy)
{
	*this = copy;
}

PowerFist &PowerFist::operator = (const PowerFist &copy)
{
	this->Name = copy.Name;
	this->dmg = copy.dmg;
	this->Ap = copy.Ap;
	return (*this);
}
