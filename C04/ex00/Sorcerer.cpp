#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	this->Name = name;
	this->Title = title;

	std::cout << name << ", " << title << " is born!\n";
}

Sorcerer::~Sorcerer()
{
	std::cout << this->Name << ", " << this->Title << " is dead. ";
	std::cout << " Consequences will never be the same!\n";
}

Sorcerer &Sorcerer::operator = (Sorcerer const &copy)
{
	this->Name = copy.Name;
	this->Title = copy.Title;
	return (*this);
}

const std::string Sorcerer::getName() const
{
	return (this->Name);
}

const std::string Sorcerer::getTitle() const
{
	return (this->Title);
}

std::ostream &operator << (std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am "<<sorcerer.getName()<<", "<<sorcerer.getTitle()<<", and I like ponies!\n";
	return (out);
}

void	Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}
