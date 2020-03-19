#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>
#include <stdlib.h>

class ClapTrap
{
	protected:
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
	ClapTrap(std::string str);
	~ClapTrap();
	ClapTrap();
	ClapTrap  &operator=(ClapTrap const &copy);
	void	rangedAtack(std::string const &target);
	void	meleeAtack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
