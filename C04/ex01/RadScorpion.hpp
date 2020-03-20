#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
	RadScorpion();
	~RadScorpion();
	RadScorpion &operator = (const RadScorpion &copy);
	RadScorpion (const RadScorpion &copy);
};

#endif
