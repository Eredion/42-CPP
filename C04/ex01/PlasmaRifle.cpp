#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
	this->Sound = "* piouuu piouuu piouuu *\n";
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy)
{
	*this = copy;
}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle &copy)
{
	this->Name = copy.Name;
	this->dmg = copy.dmg;
	this->Ap = copy.Ap;
	return (*this);
}
