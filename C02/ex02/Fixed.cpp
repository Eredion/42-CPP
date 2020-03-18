#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(const Fixed& fixed)
{
	this->value = fixed.getRawBits();
}

Fixed &Fixed::operator = (const Fixed& fixed)
{
	this->value = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::Fixed(const float f)
{
	setRawBits(roundf(f * (1 << this->n_frac)));
}

Fixed::Fixed(const int i)
{
	setRawBits(i << this->n_frac);
}

int		Fixed::toInt(void) const
{
	return(this->value >> this->n_frac);
}

float	Fixed::toFloat(void) const
{
	return((float)this->value / (float)(1 << this->n_frac));
}

std::ostream &operator << (std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

Fixed Fixed::operator + (const Fixed &fixed) const
{
	Fixed sum;

	sum.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (sum);
}

Fixed Fixed::operator - (const Fixed &fixed) const
{
	Fixed sub;

	sub.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (sub);
}

Fixed Fixed::operator * (const Fixed &fixed) const
{
	Fixed mul;

	mul.setRawBits((long int)(this->getRawBits() * fixed.getRawBits())
		>> this->n_frac);
	return (mul);
}

Fixed Fixed::operator / (const Fixed &fixed) const
{
	Fixed div;

	div.setRawBits((long int)(this->getRawBits() << this->n_frac)
		/ fixed.getRawBits());
	return (div);
}

bool Fixed::operator > (const Fixed &fixed) const
{
	if ((this->getRawBits() - fixed.getRawBits()) > 0)
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed &fixed) const
{
	if ((this->getRawBits() - fixed.getRawBits()) < 0)
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &fixed) const
{
	if ((this->getRawBits() - fixed.getRawBits()) == 0)
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &fixed) const
{
	if ((this->getRawBits() - fixed.getRawBits()) != 0)
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed &fixed) const
{
	if ((this->getRawBits() - fixed.getRawBits()) >= 0)
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed &fixed) const
{
	if ((this->getRawBits() - fixed.getRawBits()) <= 0)
		return (true);
	return (false);
}

Fixed	min(const Fixed &fixed, const Fixed &fixed2)
{
	if (&fixed < &fixed2)
		return (fixed);
	return (fixed2);
}

Fixed	&min(Fixed &fixed, Fixed &fixed2)
{
	if (fixed < fixed2)
		return (fixed);
	return (fixed2);
}

Fixed	max(const Fixed &fixed, const Fixed &fixed2)
{
	if (fixed > fixed2)
		return (fixed);
	return (fixed2);
}

Fixed	&max(Fixed &fixed, Fixed &fixed2)
{
	if (fixed > fixed2)
		return (fixed);
	return (fixed2);
}

const Fixed	&Fixed::min(Fixed const &fixed, Fixed const &fixed2)
{
	if (fixed < fixed2)
		return (fixed);
	return (fixed2);
}

Fixed	&Fixed::min(Fixed &fixed, Fixed &fixed2)
{
	if (fixed < fixed2)
		return (fixed);
	return (fixed2);
}

const Fixed	&Fixed::max(Fixed const &fixed, Fixed const &fixed2)
{
	if (fixed > fixed2)
		return (fixed);
	return (fixed2);
}

Fixed	&Fixed::max(Fixed &fixed, Fixed &fixed2)
{
	if (fixed > fixed2)
		return (fixed);
	return (fixed2);
}

Fixed &Fixed::operator ++ (void)
{
    this->value++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    operator ++();
    return (--(*this));
}

Fixed Fixed::operator--(int)
{
    operator --();
    return (++(*this));
}
