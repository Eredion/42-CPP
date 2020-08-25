#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
{
	this->Type = "Comet";
}

AsteroKreog::AsteroKreog(const AsteroKreog &copy)
{
	*this = copy;
}

AsteroKreog &AsteroKreog::operator=(const AsteroKreog &copy)
{
	*this = copy;
	return(*this);
}

AsteroKreog::~AsteroKreog()
{
	return ;
}

std::string	AsteroKreog::getName() const
{
	return (this->Type);
}

std::string	AsteroKreog::beMined(StripMiner *miner) const
{
	(void)miner;
	return("Tartarite");
}

std::string	AsteroKreog::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return("Mithril");
}
