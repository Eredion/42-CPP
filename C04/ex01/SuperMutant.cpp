#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout<<"Gaaah. Me want smash heads!\n";
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout<<"Aaargh...\n";
	return ;
}

SuperMutant::SuperMutant(SuperMutant const &copy)
{
	*this = copy;
}

SuperMutant &SuperMutant::operator = (const SuperMutant &copy)
{
	this->Hp = copy.Hp;
	this->Type = copy.Type;
	return (*this);
}
