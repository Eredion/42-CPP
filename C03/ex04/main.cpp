#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	std::cout << "Testing FragTrap\n";
	FragTrap	a("Clapi");

	a.rangedAtack("Marvin");
	a.meleeAtack("Abascal");
	a.takeDamage(104);
	a.beRepaired(200);
	a.vaulthunter_dot_exe("Coronavirus");
	a.vaulthunter_dot_exe("Dios");
	a.vaulthunter_dot_exe("itself");
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("nobody");

	std::cout << "\nTesting ScravTrap\n";
	ScavTrap	b("Scravi");

	b.rangedAtack("Marvin");
	b.meleeAtack("Abascal");
	b.takeDamage(104);
	b.beRepaired(200);
	b.challengerNewcomer();

	std::cout << "\nTesting ClapTrap alone\n";
	ClapTrap	c("rocot");

	c.rangedAtack("Marvin");
	c.meleeAtack("Abascal");
	c.takeDamage(50);
	c.beRepaired(50);

	std::cout << "\nTesting NinjaTrap\n";
	NinjaTrap	n("Naruto");

	n.rangedAtack("Marvin");
	n.meleeAtack("Abascal");
	n.takeDamage(50);
	n.beRepaired(50);
	n.NinjaShoebox(n);
	n.NinjaShoebox(c);
	n.NinjaShoebox(a);
	n.NinjaShoebox(b);

	std::cout << "\n Final test: SuperTrap\n";
	SuperTrap	s("SUPER");

	s.rangedAtack("Marvin");
	s.meleeAtack("Abascal");
	s.takeDamage(104);
	s.beRepaired(200);
	s.vaulthunter_dot_exe("Coronavirus");
	s.vaulthunter_dot_exe("Dios");
	s.vaulthunter_dot_exe("itself");
	s.vaulthunter_dot_exe("you");
	s.vaulthunter_dot_exe("nobody");
	s.NinjaShoebox(n);
	s.NinjaShoebox(c);
	s.NinjaShoebox(a);
	s.NinjaShoebox(b);
}
