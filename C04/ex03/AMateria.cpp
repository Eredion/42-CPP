#include "AMateria.hpp"

AMateria::AMateria()
{
    return ;
}

AMateria::AMateria(const std::string &type)
{
    this->XP = 0;
    this->Type = type;
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator= (const AMateria &copy)
{
	this->XP = copy.XP;
	this->Type = copy.Type;
 	return (*this);
}

const std::string &AMateria::getType() const
{
	return (this->Type);
}

int  AMateria::getXP() const
{
	return (this->XP);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	this->XP += 10;
}
