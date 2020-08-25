#include "Monster.hpp"

Monster::Monster(): Enemy(80, "Monster")
{
	std::cout<<"* mo mo monster! *\n";
	return ;
}

Monster::~Monster()
{
	std::cout<<"* bye bye *\n";
	return ;
}

Monster::Monster(Monster const &copy)
{
	*this = copy;
}

Monster &Monster::operator = (const Monster &copy)
{
	this->Hp = copy.Hp;
	this->Type = copy.Type;
	return (*this);
}
