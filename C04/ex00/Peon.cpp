#include "Peon.hpp"

Peon::Peon(std::string const &name) : Victim(name)
{
	this->Name = name;
	std::cout << "Zog zog.\n";
}

Peon::Peon()
{
	std::cout<< "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout<<"Bleuark...\n";
}

std::ostream &operator << (std::ostream &out, Peon const &peon)
{
	out << "I am "<<peon.getName()<<" and I like otters!\n";
	return (out);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->Name << " has been turned into a pink pony!\n";
}
