#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include<iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
        	int			XP;
        	std::string	Type;
    public:
        	AMateria();
        	AMateria(const std::string &type);
        	AMateria(const AMateria &copy);
        	virtual	~AMateria();
        	AMateria &operator = (const AMateria &copy);
        	virtual AMateria	*clone() const = 0;
        	virtual void	use(ICharacter &target) = 0;
        	int	getXP() const;
        	const std::string	&getType() const;
};

#endif
