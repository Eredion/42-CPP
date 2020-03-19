#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
	protected:
	std::string	Name;
	std::string	Title;
	public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer();
	~Sorcerer();
	Sorcerer &operator = (Sorcerer const &copy);
	const std::string getName() const;
	const std::string getTitle() const;
	void	polymorph(Victim const &target) const;

};

std::ostream &operator << (std::ostream &out, Sorcerer const &sorcerer);

#endif
