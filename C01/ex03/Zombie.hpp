#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
	~Zombie();
	std::string	name;
	std::string type;
	void	announce();
};

Zombie		randomChump(int n);
std::string put_name(int n);

#endif
