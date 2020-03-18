#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int					value;
	static const int	n_frac = 8;
	public:
	Fixed();
	~Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed& fixed);

	Fixed	&operator = (const Fixed &fixed);
	bool	operator > (const Fixed &fixed) const;
	bool	operator < (const Fixed &fixed) const;
	bool	operator >= (const Fixed &fixed) const;
	bool	operator <= (const Fixed &fixed) const;
	bool	operator == (const Fixed &fixed) const;
	bool	operator != (const Fixed &fixed) const;

	Fixed	operator + (const Fixed &fixed) const;
	Fixed	operator - (const Fixed &fixed) const;
	Fixed	operator * (const Fixed &fixed) const;
	Fixed	operator / (const Fixed &fixed) const;
	Fixed	&operator ++ (void);
    Fixed	&operator -- (void);
    Fixed	operator ++ (int);
    Fixed	operator -- (int);
	Fixed	&min(Fixed &fixed, Fixed &fixed2);
	Fixed	&max(Fixed &fixed, Fixed &fixed2);
	const static Fixed	&min(Fixed const &fixed, Fixed const &fixed2);
	const static Fixed	&max(Fixed const &fixed, Fixed const &fixed2);

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream &operator << (std::ostream& out, const Fixed& value);
Fixed	min(const Fixed &fixed, const Fixed &fixed2);
Fixed	max(const Fixed &fixed, const Fixed &fixed2);
Fixed	&min(Fixed &fixed, Fixed &fixed2);
Fixed	&max(Fixed &fixed, Fixed &fixed2);

#endif
