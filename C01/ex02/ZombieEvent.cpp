#include "ZombieEvent.hpp"

Zombie	*ZombieEvent::newZombie(std::string str)
{
	Zombie	*zombie;
	zombie = new Zombie;

	std::cout << "Creating a new zombie named: " << str << std::endl;
	zombie->name = str;
	std::cout << type << std::endl;
	zombie->type = type;
	return (zombie);
}

void	ZombieEvent::setZombieType(std::string str)
{
	type = str;
	std::cout << "Setting zombie type to: " << type << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}
