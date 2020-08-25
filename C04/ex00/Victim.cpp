#include "Victim.hpp"

Victim::Victim(std::string const &name)
{
	this->Name = name;
	std::cout << "Some random victim called "<<name<<" just appeared!\n";
}

Victim::Victim()
{
	this->Name = "Pacopepe";
	return ;
}

Victim::~Victim()
{
	std::cout<<"Victim "<<this->Name << " just died for no apparent reason!\n";
}

Victim &Victim::operator = (Victim const &copy)
{
	this->Name = copy.Name;
	return (*this);
}

const std::string Victim::getName() const
{
	return (this->Name);
}

std::ostream &operator << (std::ostream &out, Victim const &Victim)
{
	out << "I am "<<Victim.getName()<<" and I like otters!\n";
	return (out);
}

void	Victim::getPolymorphed() const
{
	std::cout << this->Name << " has been turned into a cute little sheep!\n";
}
