#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
    public:
        virtual               ~ISpaceMarine() { return ; }

        virtual void          battleCry(void) const = 0;
        virtual void          meleeAttack(void) const = 0;
        virtual void          rangedAttack(void) const = 0;

        virtual ISpaceMarine  *clone(void) const = 0;
};

#endif
