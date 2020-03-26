#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

typedef struct	makes
{
	std::string					type[3];
	Form *(*make)(std::string);
}				Functions;

class Intern
{
	public:
			Functions	funct[3];
			Intern();
			~Intern();
			Intern(Intern const &copy);
			Intern	&operator = (Intern const &copy);
			Form	*makeForm(std::string const type, std::string const target);
};

Form *makePres(std::string const target);
Form *makeTree(std::string const target);
Form *makeRobot(std::string const target);
std::string upper(std::string str);


#endif
