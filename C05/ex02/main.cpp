# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include "Form.hpp"
# include <fstream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

void	Tree(void)
{
	std::cout<<"\nTesting trees\n";
	ShrubberyCreationForm a("test");
	Bureaucrat c("MAX POWER", 1);
	c.signForm(a);
	c.executeForm(a);
	a.execute(c);
}

void	Rot(void)
{
	std::cout<<"\nTesting robot\n";
	RobotomyRequestForm a("test");
	Bureaucrat c("MAX POWER", 1);
	c.signForm(a);
	c.executeForm(a);
	a.execute(c);
}

void	Presi(void)
{
	std::cout<<"Testing presidential\n";
	PresidentialPardonForm a("test");
	Bureaucrat b("MID POWER", 7);
	b.executeForm(a);
	b.signForm(a);
	b.executeForm(a);
	Bureaucrat c("MAX POWER", 1);
	c.executeForm(a);
	a.execute(c);
}

int		main(void)
{
	Presi();
	Rot();
	Tree();
}
