#ifndef Monster_HPP
# define Monster_HPP

#include "Enemy.hpp"

class Monster: public Enemy
{
	public:
	Monster();
	virtual ~Monster();
	Monster &operator = (const Monster &copy);
	Monster (const Monster &copy);
};

#endif
