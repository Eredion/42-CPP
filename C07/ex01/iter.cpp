#include <iostream>

template <typename t>
void iter(t *table, size_t size, void (*f)(t const &target))
{
	for (size_t i = 0; i < size; i++)
		(f)(table[i]);
}
