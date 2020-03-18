#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public:
	~ZombieEvent();
	std::string	type;
	void		setZombieType(std::string str);
	Zombie		*newZombie(std::string str);
};

#endif
