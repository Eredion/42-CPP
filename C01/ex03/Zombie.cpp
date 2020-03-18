#include "Zombie.hpp"
#include "ZombieHorde.hpp"

std::string put_name(int n)
{
	std::string pull[] = {"Paco", "Pepe", "Juan", "Javier", "Alvaro", "Miguel",
		"Ana", "Amalia", "David", "Nicolas", "Jan", "Lucia", "Cristina", "Nacho"};
	srand(time(NULL));
	std::string name = pull[((n * n) + rand()) % 14];
	return (name);
}

void	Zombie::announce()
{
	std::cout << "mmmmmm.....Braaaaaaaiiiiiiiiiins........ggrrrr" << std::endl;
	std::cout << "Zombie name: " << name << std::endl << std::endl;
}

Zombie	randomChump(int n)
{
	Zombie	zombie;

	zombie.name = put_name(n);
	return (zombie);
}

Zombie::~Zombie()
{
	return ;
}
