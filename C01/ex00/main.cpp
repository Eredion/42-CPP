# include "Pony.hpp"

int		main(void)
{
	Pony	stack_pony;
	Pony	*heap_pony;

	heap_pony = new Pony();
	std::cout << "--- I am the stack pony ---\n";
	stack_pony.pony_name("stacky");
	stack_pony.pony_color("blue");
	stack_pony.pony_age("15");
	stack_pony.pony_print();
	std::cout << "\n--- I am the heap pony ---\n";
	heap_pony->pony_name("heapy");
	heap_pony->pony_color("red");
	heap_pony->pony_age("17");
	heap_pony->pony_print();
}
