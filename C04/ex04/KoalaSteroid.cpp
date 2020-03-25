#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid()
{
	this->Type = "Asteroid";
}

KoalaSteroid::KoalaSteroid(const KoalaSteroid &copy)
{
	*this = copy;
}

KoalaSteroid &KoalaSteroid::operator=(const KoalaSteroid &copy)
{
	*this = copy;
	return(*this);
}

KoalaSteroid::~KoalaSteroid()
{
	return ;
}

std::string	KoalaSteroid::getName() const
{
	return (this->Type);
}

std::string	KoalaSteroid::beMined(StripMiner *miner) const
{
	(void)miner;
	return("Flavium");
}

std::string	KoalaSteroid::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return("Dragonite");
}
