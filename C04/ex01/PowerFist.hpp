#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
	PowerFist();
	~PowerFist();
	PowerFist &operator = (const PowerFist &copy);
	PowerFist (const PowerFist &copy);
};

#endif
