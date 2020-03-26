# include "Intern.hpp"

Intern::Intern()
{
	this->funct[0].make = &makePres;
	this->funct[0].type[0] = "PRESIDENTIAL PARDON FORM";
	this->funct[0].type[1] = "PRESIDENTIALPARDONFORM";
	this->funct[0].type[2] = "PRESIDENTIAL PARDON";
	this->funct[1].make = &makeTree;
	this->funct[1].type[0] = "SHRUBBERY CREATION FORM";
	this->funct[1].type[1] = "SHRUBBERYCREATIONFORM";
	this->funct[1].type[2] = "SHRUBBERY CREATION";
	this->funct[2].make = &makeRobot;
	this->funct[2].type[0] = "RobOTOMY REQUEST FORM";
	this->funct[2].type[1] = "ROBOTOMYREQUESTFORM";
	this->funct[2].type[2] = "ROBOTOMY REQUEST";
	return;
}

Intern::~Intern()
{
	return;
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern	&Intern::operator = (Intern const &copy)
{
	return (*this);
}

Form	*makePres(std::string const target)
{
	return (new PresidentialPardonForm(target));
}

Form	*makeTree(std::string const target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*makeRobot(std::string const target)
{
	return (new RobotomyRequestForm(target));
}

std::string	upper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

Form *Intern::makeForm(std::string type, std::string target)
{

	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if (this->funct[i].type[j] == upper(type))
			{
				std::cout << "Intern creates " << type << std::endl;
				return (this->funct[i].make(target));
			}
		}
	}
	std::cout << "Unknown form type: " << type << std::endl;
	return (NULL);
}
