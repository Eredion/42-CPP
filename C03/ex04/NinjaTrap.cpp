#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string str)
{
	this->Name = str;
	this->Hit_points = 60;
	this->Max_hit_points = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Melee_dmg = 60;
	this->Ranged_dmg = 5;
	this->Armor = 0;
	std::cout << "Half Ninja, half Trap.... NINJATRAP IS HERE!\n";
	std::cout << "If I tell you my name ("<< str << ") I will have to kill you\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "You have never see me..." << std::endl;
	std::cout << "* " << this->Name << " has vanished *\n";
}

NinjaTrap::NinjaTrap()
{
	return ;
}

NinjaTrap &NinjaTrap::operator= (NinjaTrap const &copy)
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

void 	NinjaTrap::NinjaShoebox(NinjaTrap &target)
{
	this->Max_energy_points = 120;
	this->Energy_points = this->Max_energy_points;

	std::cout<<"NJ-TP " << this->Name << " makes a strange greeting (ninja) to ";
	std::cout<<target.getName() << " and heal his mate for 5 hit points\n";
	target.beRepaired(5);
}

void 	NinjaTrap::NinjaShoebox(ClapTrap &target)
{
	this->Max_energy_points = 120;
	this->Energy_points = this->Max_energy_points;

	std::cout<<"NJ-TP " << this->Name << " shows his aprreciation to ";
	std::cout<<target.getName() << ": -Than you, father.\n";
	target.beRepaired(5);
}

void 	NinjaTrap::NinjaShoebox(ScavTrap &target)
{
	this->Max_energy_points = 120;
	this->Energy_points = this->Max_energy_points;

	std::cout<<"NJ-TP " << this->Name << " appers suddenly behind ";
	std::cout<<target.getName() << " and atack kill with his sword!\n";
	target.takeDamage(this->Melee_dmg);
}

void 	NinjaTrap::NinjaShoebox(FragTrap &target)
{
	this->Max_energy_points = 120;
	this->Energy_points = this->Max_energy_points;

	std::cout<<"NJ-TP " << this->Name << " is hidden from ";
	std::cout<<target.getName() << " and thow him a shuriken!\n";
	target.takeDamage(this->Ranged_dmg);
}

