#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice &copy);
        ~Ice();
        Ice             &operator= (const Ice &copy);
        AMateria        *clone(void) const;
        virtual void    use(ICharacter &target);
};

#endif
