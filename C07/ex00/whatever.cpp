# include <iostream>

template <typename t>
t max(t x, t y)
{
	return (x > y? x : y);
}

template <typename t>
t min(t x, t y)
{
	return (x < y? x : y);
}

template <typename t>
void swap(t &x, t &y)
{
	t z;

	z = x;
	x = y;
	y = z;
}
