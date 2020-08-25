#include "Dude.hpp"

Dude::Dude(std::string const &name) : Victim(name)
{
	this->Name = name;
	std::cout << "I'm just a testing dude.\n";
}

Dude::Dude()
{
	std::cout<< "I'm just a testing dude.\n";
}

Dude::~Dude()
{
	std::cout<<"Farewell (test)...\n";
}

std::ostream &operator << (std::ostream &out, Dude const &Dude)
{
	out << "I am "<<Dude.getName()<<" and I'm just here to test!\n";
	return (out);
}

void	Dude::getPolymorphed() const
{
	std::cout << this->Name << " has been turned into an HELICOPTER!\n";
}
