#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator &copy);
        ~AssaultTerminator();
        AssaultTerminator    &operator= (const AssaultTerminator &copy);
        virtual void          battleCry() const;
        virtual void          meleeAttack() const;
        virtual void          rangedAttack() const;
        virtual ISpaceMarine  *clone() const;
};

#endif
