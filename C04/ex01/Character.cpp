#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->Name = name;
	this->AP = 40;
}

Character::Character()
{
	return ;
}

Character::~Character()
{
	return ;
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character &Character::operator = (const Character &copy)
{
	this->Name = copy.Name;
	this->AP = copy.AP;
	this->weapon = NULL;
	return (*this);
}

std::string	Character::getName() const
{
	return (this->Name);
}

int 	Character::getAP() const
{
	return (this->AP);
}

void	Character::recoverAP()
{
	if (this->AP + 10 > 40)
		this->AP = 40;
	else
		this->AP += 10;
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

AWeapon	*Character::getWeapon() const
{
	return(this->weapon);
}

void	Character::attack(Enemy *target)
{
	if (this->getWeapon() == NULL || target == NULL || this->getAP() < 10)
		return ;
	std::cout<<this->getName()<< " attacks "<<target->getType();
	std::cout<<" with a "<<this->getWeapon()->getName()<<std::endl;
	this->getWeapon()->attack();
	this->AP -= this->getWeapon()->getAPCost();
	target->takeDamage(this->getWeapon()->getDamage());
	if (target->getHp() == 0)
		delete (target);
}

std::ostream &operator << (std::ostream &out, Character const &me)
{
	out<<me.getName()<<" has "<<me.getAP();
	if (me.getWeapon() == NULL)
		out<<" AP and is unarmed\n";
	else
		out<<" AP and wields a "<<me.getWeapon()->getName()<<std::endl;
	return (out);
}
