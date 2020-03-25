#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    return ;
}

Ice::Ice(const Ice &src)
{
    *this = src;
}

Ice::~Ice(void)
{
    return ;
}

Ice &Ice::operator= (const Ice &copy)
{
    this->XP = copy.XP;
    return (*this);
}

AMateria *Ice::clone(void) const
{
	Ice *aux;
	aux = new Ice(*this);
    return (aux);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
