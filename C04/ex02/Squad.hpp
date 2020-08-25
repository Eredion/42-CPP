#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int	unit_n;
	ISpaceMarine **units;
public:
	Squad();
	Squad(Squad const &copy);
	virtual ~Squad();
	Squad &operator=(Squad const &copy);
	int getCount(void) const;
	ISpaceMarine *getUnit(int i) const;
	int push(ISpaceMarine *unit);
};

#endif
