#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	public:
			StripMiner();
			StripMiner(const StripMiner &copy);
			StripMiner	&operator = (const StripMiner &copy);
			virtual ~StripMiner();
			void mine(IAsteroid *target);
};

#endif
