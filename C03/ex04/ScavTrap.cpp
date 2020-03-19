#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str)
{
	this->Name = str;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level = 1;
	this->Melee_dmg = 20;
	this->Ranged_dmg = 15;
	this->Armor = 3;
	std::cout << "I am the keeper of the door and my name is " << str;
	std::cout << ", you can call me Hodor!\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "The door has been destroyed, I'm sorry..." << std::endl;
	std::cout << "* " << this->Name << " killed itself *\n";
}

ScavTrap::ScavTrap()
{
	return ;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &copy)
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

void 	ScavTrap::challengerNewcomer()
{
	this->Max_energy_points = 50;
	this->Energy_points = this->Max_energy_points;
	std::string	action[5] = {" tell the multiplication table of number 11! ",
		" sing the song: My hearth will go on ", " do 100 push-ups ",
		" tell a joke (funny, please) ", "dance La Macarena "};
	srand (time(NULL) * this->Name.length());
	int			n = rand() % 5;
	std::cout<<"SCV-TP " << this->Name << " challenges you to" << action[n] <<std::endl;;
}
