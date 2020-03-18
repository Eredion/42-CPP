#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cmath>
#include <stdlib.h>

class FragTrap
{
	private:
	std::string	Name;
	int			Hit_points;
	int			Max_hit_points;
	int			Energy_points;
	int			Max_energy_points;
	int			Level;
	int			Melee_dmg;
	int			Ranged_dmg;
	int			Armor;
	public:
	FragTrap(std::string str);
	~FragTrap();
	void	rangedAtack(std::string const &target);
	void	meleeAtack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void 	vaulthunter_dot_exe(std::string const & target);
};

#endif
