#ifndef DEATHSTAR_HPP
# define DEATHSTAR_HPP

#include "AWeapon.hpp"

class DeathStar: public AWeapon
{
	public:
	DeathStar();
	virtual ~DeathStar();
	DeathStar &operator = (const DeathStar &copy);
	DeathStar (const DeathStar &copy);
};

#endif
