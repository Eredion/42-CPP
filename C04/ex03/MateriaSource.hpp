#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
	private:
			AMateria	*invent[4];
			int			Count;
	public:
			MateriaSource();
			~MateriaSource();
			MateriaSource	&operator = (MateriaSource const &copy);
			MateriaSource(MateriaSource const &copy);
			virtual void learnMateria(AMateria* m);
			virtual AMateria *createMateria(std::string const &type);
			int		getCount() const;
};

#endif
