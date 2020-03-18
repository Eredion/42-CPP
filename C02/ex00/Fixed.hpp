#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed &operator = (const Fixed& fixed);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	private:
	int					value;
	static const int	n_frac = 8;
};

#endif
