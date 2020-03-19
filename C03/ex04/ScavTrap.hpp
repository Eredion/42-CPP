#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap(std::string str);
	~ScavTrap();
	ScavTrap();
	ScavTrap  &operator=(ScavTrap const &copy);
	void 	challengerNewcomer();
};

#endif
