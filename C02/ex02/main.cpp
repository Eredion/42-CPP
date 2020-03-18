#include "Fixed.hpp"

int		main(void)
{
	Fixed a;
	Fixed const f( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << f << std::endl;
	std::cout << Fixed::max( a, f ) << std::endl << std::endl;

	a = 10;
	Fixed b = 5.5f;
	std::cout<< "Checking sum " << a << " + " << b << " = " << a + b << std::endl << std::endl;
	std::cout<< "Checking sub " << a << " - " << b << " = " << a - b << std::endl << std::endl;
	std::cout<< "Checking " << a << " > " << b << " = " << (a > b) << std::endl;
	std::cout<< "Checking " << b << " > " << a << " = " << (b > a) << std::endl;
	std::cout<< "Checking " << a << " > " << a << " = " << (a > a) << std::endl << std::endl;
	std::cout<< "Checking " << a << " < " << b << " = " << (a < b) << std::endl;
	std::cout<< "Checking " << b << " < " << a << " = " << (b < a) << std::endl;
	std::cout<< "Checking " << a << " < " << a << " = " << (a < a) << std::endl << std::endl;
	std::cout<< "Checking " << a << " >= " << b << " = " << (a >= b) << std::endl;
	std::cout<< "Checking " << b << " >= " << a << " = " << (b >= a) << std::endl;
	std::cout<< "Checking " << a << " >= " << a << " = " << (a >= a) << std::endl << std::endl;
	std::cout<< "Checking " << a << " <= " << b << " = " << (a <= b) << std::endl;
	std::cout<< "Checking " << b << " <= " << a << " = " << (b <= a) << std::endl;
	std::cout<< "Checking " << a << " <= " << a << " = " << (a <= a) << std::endl << std::endl;
	std::cout<< "Checking " << a << " == " << b << " = " << (a == b) << std::endl;
	std::cout<< "Checking " << b << " == " << a << " = " << (b == a) << std::endl;
	std::cout<< "Checking " << a << " == " << a << " = " << (a == a) << std::endl << std::endl;
	std::cout<< "Checking " << a << " != " << b << " = " << (a != b) << std::endl;
	std::cout<< "Checking " << b << " != " << a << " = " << (b != a) << std::endl << std::endl;
	std::cout<< "Checking min " << a << ", " << b << " = " << min(a, b) << std::endl << std::endl;
	std::cout<< "Checking max " << a << ", " << b << " = " << max(a, b) << std::endl << std::endl;

	a = -9;
	b = 5.5f;
	std::cout<< "Checking mul " << a << " * " << b << " = " << a * b << std::endl << std::endl;
	a = 10;
	b = 2.5f;
	std::cout<< "Checking div " << a << " / " << b << " = " << a / b << std::endl << std::endl;
}
