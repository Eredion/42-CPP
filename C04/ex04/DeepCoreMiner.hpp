#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
	public:
			DeepCoreMiner();
			DeepCoreMiner(const DeepCoreMiner &copy);
			DeepCoreMiner	&operator = (const DeepCoreMiner &copy);
			virtual ~DeepCoreMiner();
			void mine(IAsteroid *target);
};

#endif
