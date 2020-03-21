#include "Squad.hpp"

Squad::Squad()
{
	unit_n = 0;
	units = NULL;
	return ;
}

Squad::Squad(Squad const &copy)
{
	this->units = NULL;
	this->unit_n = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->units != NULL)
	{
		for (int i = 0; i < this->unit_n; i++)
			delete this->units[i];
		delete this->units;
	}
}

Squad &Squad::operator=(Squad const &copy)
{
	if (this->units != NULL)
	{
		for (int i = 0; i < this->getCount(); i++)
			delete this->units[i];
		delete this->units;
		this->units = nullptr;
	}
	this->unit_n = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->unit_n);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (this->getCount() == 0 || i < 0 || i >= this->getCount())
		return (NULL);
	return (this->units[i]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->unit_n);
	if (this->units)
	{
		for (int i = 0; i < this->getCount(); i++)
			if (this->units[i] == unit)
				return (this->unit_n);
		ISpaceMarine **aux = new ISpaceMarine*[this->getCount() + 1];
		for (int i = 0; i < this->getCount(); i++)
			aux[i] = this->units[i];
		delete this->units;
		this->units = aux;
		this->units[this->getCount()] = unit;
		this->unit_n++;
	}
	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[1] = NULL;
		this->units[0] = unit;
		this->unit_n = 1;
	}
	return (this->unit_n);
}
