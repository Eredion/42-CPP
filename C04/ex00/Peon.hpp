#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon: public Victim
{
	protected:
	std::string	Name;
	public:
	Peon(std::string const &name);
	Peon();
	~Peon();
	void	getPolymorphed() const;
};

std::ostream &operator << (std::ostream &out, Peon const &peon);

#endif
