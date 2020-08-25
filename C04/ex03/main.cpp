#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

int 	main(void)
{
	Ice m;
	Character yo("Alvaro");
	std::cout<<m.getType()<<std::endl;
	m.use(yo);
	Cure *cura = new Cure;
	Cure *cura1 = new Cure;
	Cure *cura2 = new Cure;
	Cure *cura3 = new Cure;
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	yo.equip(cura);
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	yo.equip(cura1);
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	yo.equip(cura2);
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	yo.equip(cura3);
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	yo.equip(cura);
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	yo.unequip(0);
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	yo.unequip(1);
	std::cout<<"Equipo: "<<yo.getCount()<<std::endl;
	std::cout<<"Heal xp = "<<yo.inventory[0]->getXP()<<std::endl;
	yo.use(0, yo);
	std::cout<<"Heal xp = "<<yo.inventory[0]->getXP()<<std::endl;
	std::cout<<"\nPruebas del PDF\n";

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
