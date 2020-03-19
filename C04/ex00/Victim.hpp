#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	protected:
	std::string	Name;
	public:
	Victim(std::string const &name);
	Victim();
	~Victim();
	Victim &operator = (Victim const &copy);
	const 	std::string getName() const;
	void	getPolymorphed() const;

};

std::ostream &operator << (std::ostream &out, Victim const &Victim);

#endif
