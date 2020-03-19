#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	public:
	SuperTrap(std::string str);
	~SuperTrap();
	SuperTrap();
	SuperTrap  &operator=(SuperTrap const &copy);
};

#endif
