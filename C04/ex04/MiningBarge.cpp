#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	this->Count = 0;
}

MiningBarge::~MiningBarge()
{
	for (int i = 0; i < getCount(); i++)
		delete (Equip[i]);
}

MiningBarge::MiningBarge(MiningBarge const &copy)
{
	if (this->getCount())
	{
		for(int i = 0; i < (this->getCount() - 1); i++)
			delete this->Equip[i];
	}
	for (int i = 0; i < (copy.getCount() - 1); i++)
		this->Equip[i] = copy.Equip[i];
		this->Count = copy.getCount();
}

MiningBarge &MiningBarge::operator = (MiningBarge const &copy)
{
	for(int i = 0; i < (this->getCount() - 1); i++)
		delete this->Equip[i];
	for (int i = 0; i < (copy.getCount() - 1); i++)
		this->Equip[i] = copy.Equip[i];
		this->Count = copy.getCount();
	return (*this);
}

int		MiningBarge::getCount() const
{
	return (this->Count);
}

void	MiningBarge::equip(IMiningLaser *laser)
{
	if (!laser || this->getCount() == 4)
		return;
	this->Equip[getCount()] = laser;
	this->Count++;
}

void	MiningBarge::mine(IAsteroid *target) const
{
	for (int i = 0; i < this->getCount(); i++)
		this->Equip[i]->mine(target);
}

