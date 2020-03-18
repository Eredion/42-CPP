#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	destroy_horde(ZombieHorde *z)
{
	std::cout << "(The horde was destroyed)\n";
	delete(z);
}

int		main(void)
{
	ZombieHorde *horde;
	horde = new ZombieHorde;

	horde->summon(3);
	horde->anounce();
	destroy_horde(horde);
}
