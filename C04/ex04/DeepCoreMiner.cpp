#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
	return ;
}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &copy)
{
	*this = copy;
}

DeepCoreMiner &DeepCoreMiner::operator=(const DeepCoreMiner &copy)
{
	*this = copy;
	return(*this);
}

DeepCoreMiner::~DeepCoreMiner()
{
	return ;
}

void	DeepCoreMiner::mine(IAsteroid *target)
{
	if (!target)
		return;
	std::cout<<"* mining deep ... got "<<target->beMined(this)<<" ! *\n";
}
