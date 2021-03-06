#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str)
{
	this->Name = str;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Melee_dmg = 30;
	this->Ranged_dmg = 20;
	this->Armor = 5;
	std::cout << "I am a CL4P-TP steward robot and my name is " << str;
	std::cout << ", but my friends Call me Claptrap!\n";
	std::cout << "Or they would, if any of them were still alive ";
	std::cout << "or had existed in the first place!\n";
}

FragTrap::FragTrap()
{
	return ;
}

FragTrap &FragTrap::operator= (FragTrap const &copy)
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

FragTrap::~FragTrap()
{
	std::cout << "OH NO! My only weakness.... STAIRS!!!" << std::endl;
	std::cout << "* Claptrap runs away forever *\n";
}

void 	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if  (this->Energy_points < 25)
	{
		std::cout << "Ouch! I need at least 25 energy points..."<<std::endl;
		return ;
	}
	this->Energy_points -= 25;
	this->Max_energy_points = 100;
	std::string	attacks[5] = {" falls off accidentally and throws a nut at ",
		" shoot a shotgun at ", " insults hurtfully ", " trows a part of his body at ",
		"tells a (terrible) joke to "};
	int			dmg[5] = {10, 30, 1, 20, 1000};
	srand (time(NULL) * target.length() * this->Name.length());
	int			n = rand() % 5;
	std::cout<<"FR4G-TP " << this->Name << attacks[n] << target;
	std::cout<<" causing "<<dmg[n]<<" points of damage!"<<std::endl;
	std::cout<<"Current energy points: "<<this->Energy_points<<std::endl;
}
