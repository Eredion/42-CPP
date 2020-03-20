#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle &operator = (const PlasmaRifle &copy);
	PlasmaRifle (const PlasmaRifle &copy);
};

#endif
