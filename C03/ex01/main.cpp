#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << "Testing ScravTrap\n";
	ScavTrap	b("Scravi");

	b.rangedAtack("Marvin");
	b.meleeAtack("Abascal");
	b.takeDamage(104);
	b.beRepaired(200);
	b.challengerNewcomer();

}
