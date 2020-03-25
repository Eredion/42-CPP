#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->Name = name;
	this->Count = 0;
}

Character::Character(): Character("unnamed")
{
}

Character::Character(Character const &copy)
{
	for(int i = 0; i < (this->getCount() - 1); i++)
		delete this->inventory[i];
	for (int i = 0; i < (copy.getCount() - 1); i++)
		this->inventory[i] = copy.inventory[i]->clone();
	this->Count = copy.getCount();
}

Character::~Character()
{
	for(int i = 0; i < (this->getCount() - 1); i++)
		delete this->inventory[i];
}

Character	&Character::operator = (Character const &copy)
{
	for(int i = 0; i < (this->getCount() - 1); i++)
		delete this->inventory[i];
	for (int i = 0; i < (copy.getCount() - 1); i++)
		this->inventory[i] = copy.inventory[i]->clone();
	this->Count = copy.getCount();
	return (*this);
}

const std::string &Character::getName() const
{
	return(this->Name);
}

int	Character::getCount() const
{
	return (this->Count);
}

void	Character::equip(AMateria *m)
{
	if (!m || getCount() == 4)
		return;
	this->inventory[getCount()] = m;
	this->Count++;
}

void	Character::unequip(int idx)
{
	if (idx > -1 && this->getCount() > idx)
		this->inventory[idx] = NULL;
	else
		return ;
	for (int i = 1; idx + i < getCount() - 1; i++)
	{
		this->inventory[idx] = this->inventory[idx + i];
		this->inventory[idx + i] = NULL;
	}
	this->Count--;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > -1 && idx < this->getCount())
		this->inventory[idx]->use(target);
}

