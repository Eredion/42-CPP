#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine &copy);
        ~TacticalMarine();
        TacticalMarine    &operator= (const TacticalMarine &copy);
        virtual void          battleCry() const;
        virtual void          meleeAttack() const;
        virtual void          rangedAttack() const;
        virtual ISpaceMarine  *clone() const;
};

#endif
