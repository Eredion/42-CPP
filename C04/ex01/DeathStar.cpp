#include "DeathStar.hpp"

DeathStar::DeathStar(): AWeapon("Death Star", 1, 200)
{
	this->Sound = "* Tan tan tan... (Imperial March) *\n";
	return ;
}

DeathStar::~DeathStar()
{
	return ;
}

DeathStar::DeathStar(DeathStar const &copy)
{
	*this = copy;
}

DeathStar &DeathStar::operator = (const DeathStar &copy)
{
	this->Name = copy.Name;
	this->dmg = copy.dmg;
	this->Ap = copy.Ap;
	return (*this);
}
