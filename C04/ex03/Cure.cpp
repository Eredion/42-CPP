#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    return ;
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
}

Cure::~Cure()
{
    return ;
}

Cure &Cure::operator= (const Cure &copy)
{
    this->XP = copy.XP;
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *aux;
	aux = new Cure(*this);
    return (aux);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
