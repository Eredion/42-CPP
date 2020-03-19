#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	FragTrap(std::string str);
	~FragTrap();
	FragTrap();
	FragTrap  &operator=(FragTrap const &copy);
	void 	vaulthunter_dot_exe(std::string const & target);
};

#endif
