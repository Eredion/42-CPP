#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Dude.hpp"

int	main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout<< std::endl;
	Dude paco("Paco");
	std::cout << paco;
	robert.polymorph(paco);
	std::cout<< std::endl;

	return 0;
}
