#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant &operator = (const SuperMutant &copy);
	SuperMutant (const SuperMutant &copy);

	void	takeDamage(int dmg);
};

#endif
