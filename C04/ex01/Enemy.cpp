#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->Type = type;
	this->Hp = hp;
}

Enemy::Enemy()
{
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
}

Enemy &Enemy::operator = (const Enemy &copy)
{
	this->Hp = copy.Hp;
	this->Type = copy.Type;
	return (*this);
}

std::string	Enemy::getType() const
{
	return (this->Type);
}

int 	Enemy::getHp() const
{
	return (this->Hp);
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg < 1)
		return ;
	this->Hp -= dmg;
	if (this->Hp < 1)
		this->Hp = 0;
}
