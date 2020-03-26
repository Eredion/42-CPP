# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include "Form.hpp"
# include <fstream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

int		main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("RoboTomy RequEst", "Bender");
	Bureaucrat a("Alvaro", 1);
	a.signForm(*rrf);
	rrf->execute(a);
}
