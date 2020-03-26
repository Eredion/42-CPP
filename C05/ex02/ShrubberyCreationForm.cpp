#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target):
Form("Shrubbery", 145, 137)
{
	this->Target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm():
ShrubberyCreationForm::ShrubberyCreationForm("Undef_target")
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):
Form(copy.getName(), copy.getRank_s(), copy.getRank_s())
{
	*this = copy;
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream dst(this->Target);
	if (dst.fail())
	{
		std::cout << "ERROR: creating file error" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		dst<<"                                                       \n"<<
		"                      #                                               #                   \n"<<
    	"                     ###                                             ###                  \n"<<
    	"            *#:. .:##*##:. .:#*                             *#:. .:##*##:. .:#*           \n"<<
    	"              *####*###*####*                                 *####*###*####*             \n"<<
    	"       *#:.    .:#*###*#:.    .:#*                     *#:.    .:#*###*#:.    .:#*        \n"<<
    	"           *#########*#########*                           *#########*#########*          \n"<<
    	"        *#:.  *####*###*####*  .:#*                     *#:.  *####*###*####*  .:#*       \n"<<
    	"         *#######**##*##**#######*                       *#######**##*##**#######*        \n"<<
    	"            *##*#####*#####*##*                             *##*#####*#####*##*           \n"<<
    	"   *#:. ...  .:##*###*###*##:.  ... .:#*          *#:. ...  .:##*###*###*##:.  ... .:#*   \n"<<
    	"       *#######*##*#####*##*#######*                  *#######*##*#####*##*#######*       \n"<<
    	"          *#####**#######**#####*                        *#####**#######**#####*          \n"<<
    	"             *      000      *                               *      000      *            \n"<<
    	"                    000                                             000                   \n"<<
		" ..................O000O...........................................O000O..................\n";
	}
	dst.close();
}

std::ostream	&operator << (std::ostream &out, const ShrubberyCreationForm &ShrubberyCreationForm)
{
	out<<"ShrubberyCreationForm "<<ShrubberyCreationForm.getName()<<"    Signed grade: "<<ShrubberyCreationForm.getRank_s();
	out<<"    Execution grade: "<<ShrubberyCreationForm.getRank_e()<<"    Status: ";
	if (ShrubberyCreationForm.getStatus() == true)
		out<<"Signed";
	else
		out<<"Unsigned";
	return (out);
}
