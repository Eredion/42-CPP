#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* Teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy)
{
    *this = copy;
    std::cout << "* Teleports from space *" << std::endl;
    return ;
}


AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back..." << std::endl;
    return ;
}


AssaultTerminator &AssaultTerminator::operator= (const AssaultTerminator &copy)
{
	(void)copy;
	return (*this);
}


void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
    return ;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
    return ;
}

ISpaceMarine *AssaultTerminator::clone() const
{
    return (new AssaultTerminator);
}
