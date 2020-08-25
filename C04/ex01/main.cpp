#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "Monster.hpp"
#include "DeathStar.hpp"

int		main(void)
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout<< "\nMore tests\n";
	Enemy* c = new SuperMutant();
	AWeapon *testw = new DeathStar();
	std::cout << "Super mutant HP = " << c->getHp() << std::endl;
	me->attack(c);
	std::cout << "Super mutant HP = " << c->getHp() << std::endl;
	Enemy* d = new Monster();
	me->equip(testw);
	std::cout << *me;
	me->attack(d);
	
	return 0;
}
