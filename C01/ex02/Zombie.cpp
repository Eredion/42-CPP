#include "Zombie.hpp"

Zombie::~Zombie()
{
	return ;
}

std::string rand_name()
{
	char cons[] = {'b','c','d','f','g','h','j','k',
		'l','m','n','p','r','s','t','v','w','x','z'};
	char vow[] = {'a','e','i','o','u','y'};

	std::string name = "";
	srand(time(NULL));
  	int random = rand() % 2;
  	for (int i = 0; i < 6; i++)
  	{
	  	if (i % 2 == 0)
			name = name + cons[rand() % 19];
		else
      		name = name + vow[rand() % 5];
    	random = rand() % 2;
	}
	return (name);
}

void	Zombie::announce()
{
	std::cout << "mmmmmm.....Braaaaaaaiiiiiiiiiins........ggrrrr" << std::endl;
	std::cout << "Zombie name: " << name << std::endl;
	std::cout << "Zombie type: " << type << std::endl << std::endl;
}

Zombie	*randomChump()
{
	Zombie	*zombie;
	zombie = new Zombie;

	zombie->name = rand_name();
	std::cout << "Creating zombie with randomChump" << std::endl;
	zombie->announce();
	return (zombie);
}


