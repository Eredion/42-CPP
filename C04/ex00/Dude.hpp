#ifndef DUDE_HPP
# define DUDE_HPP

#include "Victim.hpp"
#include <iostream>

class Dude: public Victim
{
	protected:
	std::string	Name;
	public:
	Dude(std::string const &name);
	Dude();
	virtual ~Dude();
	void	getPolymorphed() const;
};

std::ostream &operator << (std::ostream &out, Dude const &Dude);

#endif
