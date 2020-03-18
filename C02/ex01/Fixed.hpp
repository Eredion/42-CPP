#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
	Fixed();
	~Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed& fixed);
	Fixed	&operator = (const Fixed& fixed);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	private:
	int					value;
	static const int	n_frac = 8;
};

std::ostream &operator << (std::ostream& out, const Fixed& value);

#endif
