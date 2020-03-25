#include "Form.hpp"
#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout<<"Trying incorrect definition\n";
	try
	{
		Form b("Carlos", 200, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form c("Carlos", 120, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<"\nTrying correct definition\n";
	Form b("Pepe", 120, 150);
	std::cout<<b<<std::endl;
	std::cout<<"\nTesting signature (Form)\n";
	Bureaucrat a("Juan", 1);
	Bureaucrat z("Javier", 150);
	try
	{
		b.beSigned(a);
		std::cout<<b<<std::endl;
		b.beSigned(z);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<"\nTesting signature (Bureau..)\n";
	Form f("Beca", 120, 150);
	std::cout<<f<<std::endl;
	Bureaucrat ju("yo", 1);
	Bureaucrat ja("tu", 150);
	try
	{
		ju.signForm(f);
		std::cout<<f<<std::endl;
		ja.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
