#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	destroy_zombie(Zombie *z)
{
	std::cout << "I wil destroy you " << z->name << "!\n";
	std::cout << "(The zombie named " << z->name << " was destroyed)\n";
	delete(z);
}

int		main(void)
{
	Zombie	*z1, *z2, *z3;
	ZombieEvent event;
	z1 = new Zombie;
	z2 = new Zombie;
	z3 = new Zombie;

	z1 = randomChump();
	z2 = event.newZombie("Pepe");
	z2->announce();
	event.setZombieType("Vegetarian");
	z3 = event.newZombie("Paco");
	z3->announce();
	destroy_zombie(z1);
	destroy_zombie(z2);
	destroy_zombie(z3);
}
