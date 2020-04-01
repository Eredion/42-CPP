#include <exception>
#include <iostream>
#include <set>

#include "easyfind.hpp"

int main(void)
{
	std::set<int> s;

	for (int i = 10; i <= 20; i++)
		s.insert(i);

	for (int i = 0; i <= 30; i++)
		easyfind(s, i);
}
