#include "StripMiner.hpp"

StripMiner::StripMiner()
{
	return ;
}

StripMiner::StripMiner(const StripMiner &copy)
{
	*this = copy;
}

StripMiner &StripMiner::operator=(const StripMiner &copy)
{
	*this = copy;
	return(*this);
}

StripMiner::~StripMiner()
{
	return ;
}

void	StripMiner::mine(IAsteroid *target)
{
	std::cout<<"* mining deep ... got "<<target->beMined(this)<<" ! *\n";
}
