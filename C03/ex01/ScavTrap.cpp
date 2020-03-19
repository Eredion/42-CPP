#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str):
	Name(str), Hit_points(100), Max_hit_points(100), Energy_points(50),
	Max_energy_points(50), Level(1), Melee_dmg(20), Ranged_dmg(15), Armor(3)
{
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

void	ScavTrap::rangedAtack(std::string const &target)
{
	std::cout<<"SCV-TP " << this->Name << " attacks " << target;
	std::cout<<" at range, causing "<<this->Ranged_dmg<<" points of damage!"<<std::endl;
}

void	ScavTrap::meleeAtack(std::string const &target)
{
	std::cout<<"SCV-TP " << this->Name << " hits " << target << " at melee range";
	std::cout<<", causing "<<this->Melee_dmg<<" points of damage!"<<std::endl;
}

void	ScavTrap::takeDamage(unsigned int ammount)
{
	int dmg = (ammount - this->Armor) > 0 ? ammount - this->Armor : 0;
	std::cout<<"SCV-TP " << this->Name << " gets a " << ammount << " damage hit. ";
	std::cout<<"Thanks to his armor, he recieves "<<(dmg * this->Level);
	this->Hit_points = this->Hit_points - dmg < 0 ? 0 : this->Hit_points - dmg;
	std::cout<<" points of damage.\nCurrent hit points: "<<this->Hit_points<<std::endl;
}

void	ScavTrap::beRepaired(unsigned int ammount)
{
	this->Hit_points += ammount;
	this->Hit_points = this->Hit_points > this->Max_hit_points ? 100 : 0;
	std::cout<<"SCV-TP " << this->Name << " is repaired, healing " << ammount;
	std::cout<<" points of damage.\nCurrent hit points: "<<this->Hit_points<<std::endl;
}

void 	ScavTrap::challengerNewcomer()
{
	this->Max_energy_points = 100;
	this->Energy_points = this->Max_energy_points;
	std::string	action[5] = {" tell the multiplication table of number 11! ",
		" sing the song: My hearth will go on ", " do 100 push-ups ",
		" tell a joke (funny, please) ", "dance La Macarena "};
	srand (time(NULL) * this->Name.length());
	int			n = rand() % 5;
	std::cout<<"SCV-TP " << this->Name << "challenges you to" << action[n] <<std::endl;;
}
