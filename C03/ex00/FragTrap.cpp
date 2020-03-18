#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str):
	Name(str), Hit_points(100), Max_hit_points(100), Energy_points(100),
	Max_energy_points(100), Level(1), Melee_dmg(30), Ranged_dmg(20), Armor(5)
{
	std::cout << "I am a CL4P-TP steward robot and my name is " << str;
	std::cout << ", but my friends Call me Claptrap!\n";
	std::cout << "Or they would, if any of them were still alive ";
	std::cout << "or had existed in the first place!\n\n";
}

FragTrap::~FragTrap()
{
	std::cout << "OH NO! My only weakness.... STAIRS!!!" << std::endl;
	std::cout << "* Claptrap runs away forever *\n";
}
