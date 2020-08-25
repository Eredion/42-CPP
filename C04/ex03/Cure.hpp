#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure &copy);
        ~Cure();
        Cure             &operator= (const Cure &copy);
        AMateria        *clone(void) const;
        virtual void    use(ICharacter &target);
};

#endif
