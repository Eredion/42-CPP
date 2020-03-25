#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout<<"Trying wrong definitions\n";
	try
	{
		Bureaucrat b("Carlos", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat c("Carlos", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<"\nTrying wrong inc/dec\n";
	Bureaucrat b("Pepe", 1);
	Bureaucrat c("Paco", 150);
	std::cout<<b<<std::endl;
	std::cout<<c<<std::endl;
	try
	{
		b.incRank();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c.decRank();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout<<"\nTrying correct inc/dec\n";
	std::cout<<b<<std::endl;
	std::cout<<c<<std::endl;
		try
	{
		c.incRank();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b.decRank();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<b<<std::endl;
	std::cout<<c<<std::endl;
}
