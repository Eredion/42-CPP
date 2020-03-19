#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string str): NinjaTrap(Name), FragTrap(Name)
{
	this->Name = str;
	this->Hit_points = this->FragTrap::Hit_points;
	this->Max_hit_points = this->FragTrap::Max_hit_points;
	this->Energy_points = this->NinjaTrap::Energy_points;
	this->Max_energy_points = this->NinjaTrap::Max_energy_points;
	this->Level = 1;
	this->Melee_dmg = this->NinjaTrap::Melee_dmg;
	this->Ranged_dmg = this->FragTrap::Ranged_dmg;
	this->Armor = this->FragTrap::Armor;
	std::cout << "I AM THE MOST POWERFULL CL4P-TP EVER CREATED\n";
	std::cout << "MY NAME IS "<< str << " AND I WILL RULE THE WORLD\n";
}

SuperTrap::~SuperTrap()
{
	std::cout << "* " << this->Name << " exploded in a million pieces *\n";
}

SuperTrap::SuperTrap()
{
	std::cout << "I AM THE MOST POWERFULL CL4P-TP EVER CREATED\n";
	return ;
}

SuperTrap &SuperTrap::operator= (SuperTrap const &copy)
{
	this->Name = copy.Name;
	this->Hit_points = copy.Hit_points;
	this->Max_hit_points = copy.Max_hit_points;
	this->Energy_points = copy.Energy_points;
	this->Max_energy_points = copy.Max_energy_points;
	this->Level = copy.Level;
	this->Melee_dmg = copy.Melee_dmg;
	this->Ranged_dmg = copy.Ranged_dmg;
	this->Armor = copy.Armor;
    return (*this);
}

