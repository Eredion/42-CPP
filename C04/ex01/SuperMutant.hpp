#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
	SuperMutant();
	~SuperMutant();
	SuperMutant &operator = (const SuperMutant &copy);
	SuperMutant (const SuperMutant &copy);
};

#endif
