#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str):
	Name(str), Hit_points(10), Max_hit_points(10), Energy_points(10),
	Max_energy_points(10), Level(1), Melee_dmg(10), Ranged_dmg(10), Armor(1)
{
	std::cout << "I am a CL4P-TP steward robot and my name is " << str;
	std::cout << ". I am the base of every other Trap series robot!\n";
}

ClapTrap::ClapTrap()
{
	std::cout << "Your are building a ClapTrap! " << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &copy)
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

ClapTrap::~ClapTrap()
{
	std::cout << "I hope this unit of CL4P-TP has been useful" << std::endl;
	std::cout << "* The robot turns itself off *" << std::endl;
}

void	ClapTrap::rangedAtack(std::string const &target)
{
	std::cout<<"CL4P-TP " << this->Name << " attacks " << target;
	std::cout<<" at range, causing "<<this->Ranged_dmg<<" points of damage!"<<std::endl;
}

void	ClapTrap::meleeAtack(std::string const &target)
{
	std::cout<<"CL4P-TP " << this->Name << " hits " << target << " at melee range";
	std::cout<<", causing "<<this->Melee_dmg<<" points of damage!"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	int dmg = (ammount - this->Armor) > 0 ? ammount - this->Armor : 0;
	std::cout<<"CL4P-TP " << this->Name << " gets a " << ammount << " damage hit. ";
	std::cout<<"Thanks to his armor, he recieves "<<(dmg * this->Level);
	this->Hit_points = this->Hit_points - dmg < 0 ? 0 : this->Hit_points - dmg;
	std::cout<<" points of damage.\nCurrent hit points: "<<this->Hit_points<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	this->Hit_points += ammount;
	this->Hit_points = this->Hit_points > this->Max_hit_points ? this->Max_hit_points : this->Hit_points;
	std::cout<<"CL4P-TP " << this->Name << " is repaired, healing " << ammount;
	std::cout<<" points of damage.\nCurrent hit points: "<<this->Hit_points<<std::endl;
}

std::string	ClapTrap::getName()
{
	return (this->Name);
}


