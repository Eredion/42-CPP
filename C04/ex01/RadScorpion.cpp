#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout<<"* click click click *\n";
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout<<"* SPROTCH *\n";
	return ;
}

RadScorpion::RadScorpion(RadScorpion const &copy)
{
	*this = copy;
}

RadScorpion &RadScorpion::operator = (const RadScorpion &copy)
{
	this->Hp = copy.Hp;
	this->Type = copy.Type;
	return (*this);
}
