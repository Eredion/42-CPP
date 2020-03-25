#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < getCount(); i++)
		delete (invent[i]);
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	if (this->getCount())
	{
		for(int i = 0; i < (this->getCount() - 1); i++)
			delete this->invent[i];
	}
	for (int i = 0; i < (copy.getCount() - 1); i++)
		this->invent[i] = copy.invent[i]->clone();
		this->Count = copy.getCount();
}

MateriaSource &MateriaSource::operator = (MateriaSource const &copy)
{
	for(int i = 0; i < (this->getCount() - 1); i++)
		delete this->invent[i];
	for (int i = 0; i < (copy.getCount() - 1); i++)
		this->invent[i] = copy.invent[i]->clone();
		this->Count = copy.getCount();
	return (*this);
}

int		MateriaSource::getCount() const
{
	return (this->Count);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m || this->getCount() == 4)
		return;
	this->invent[getCount()] = m;
	this->Count++;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->getCount(); i++)
	{
		if (type.compare(this->invent[i]->getType()) == 0)
			return(this->invent[i]->clone());
	}
	return (NULL);
}
