#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include <iostream>
#include <cmath>
#include <stdlib.h>

class ScavTrap
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
	ScavTrap(std::string str);
	~ScavTrap();
	void	rangedAtack(std::string const &target);
	void	meleeAtack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void 	challengerNewcomer();
};

#endif
