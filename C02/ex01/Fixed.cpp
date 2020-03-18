#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.getRawBits();
}

Fixed &Fixed::operator = (const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * (1 << this->n_frac)));
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
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

