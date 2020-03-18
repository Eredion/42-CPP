#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"


class ZombieHorde
{
	public:
	~ZombieHorde();
	Zombie	*horde;
	void	summon(int N);
	void	anounce();
	private:
	int n;

};

#endif
