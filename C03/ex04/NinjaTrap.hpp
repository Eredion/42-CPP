#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
	public:
	NinjaTrap(std::string str);
	~NinjaTrap();
	NinjaTrap();
	NinjaTrap  &operator=(NinjaTrap const &copy);
	void 	NinjaShoebox(NinjaTrap &target);
	void 	NinjaShoebox(ClapTrap &target);
	void 	NinjaShoebox(ScavTrap &target);
	void 	NinjaShoebox(FragTrap &target);
};

#endif
