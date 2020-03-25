#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character: public ICharacter
{
	public:
			std::string Name;
			AMateria 	*inventory[4];
			int			Count;

	public:
			Character(std::string const &name);
			Character();
			Character(Character const &copy);
			~Character();
			Character	&operator = (Character const &copy);
			std::string const &getName() const;
			int	getCount() const;
			virtual void equip(AMateria* m);
			virtual void unequip(int idx);
			void use(int idx, ICharacter& target);
};

#endif
