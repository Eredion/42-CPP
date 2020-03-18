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

void	FragTrap::rangedAtack(std::string const &target)
{
	std::cout<<"FR4G-TP " << this->Name << " attacks " << target;
	std::cout<<" at range, causing "<<this->Ranged_dmg<<" points of damage!"<<std::endl;
}

void	FragTrap::meleeAtack(std::string const &target)
{
	std::cout<<"FR4G-TP " << this->Name << " hits " << target << " at melee range";
	std::cout<<", causing "<<this->Melee_dmg<<" points of damage!"<<std::endl;
}

void	FragTrap::takeDamage(unsigned int ammount)
{
	int dmg = (ammount - this->Armor) > 0 ? ammount - this->Armor : 0;
	std::cout<<"FR4G-TP " << this->Name << " gets a " << ammount << " damage hit. ";
	std::cout<<"Thanks to his armor, he recieves "<<(dmg * this->Level);
	this->Hit_points = this->Hit_points - dmg < 0 ? 0 : this->Hit_points - dmg;
	std::cout<<" points of damage.\nCurrent hit points: "<<this->Hit_points<<std::endl;
}

void	FragTrap::beRepaired(unsigned int ammount)
{
	this->Hit_points += ammount;
	this->Hit_points = this->Hit_points > this->Max_hit_points ? 100 : 0;
	std::cout<<"FR4G-TP " << this->Name << " is repaired, healing " << ammount;
	std::cout<<" points of damage.\nCurrent hit points: "<<this->Hit_points<<std::endl;
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
