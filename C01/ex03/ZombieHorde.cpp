#include "ZombieHorde.hpp"
#include "Zombie.hpp"

void	ZombieHorde::summon(int N)
{
	this->horde = new Zombie[N];

	n = N;
	for (int i = 0; i < N; i++)
		this->horde[i] = randomChump(i);
}

void	ZombieHorde::anounce()
{
	std::cout << "This horde has " << n << " zombies \n";
	for(int i = 0; i < n; i++)
		this->horde[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	return ;
}
