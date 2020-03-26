#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target):
Form("Robotomy", 72, 45)
{
	this->Target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm():
RobotomyRequestForm::RobotomyRequestForm("Undef_target")
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
Form(copy.getName(), copy.getRank_s(), copy.getRank_s())
{
	*this = copy;
}

void	RobotomyRequestForm::action() const
{
	long int n;

	srand(time(NULL));
	n = rand() + this->Target.length();
	std::cout<<"* prrrr prrrr prrrr prrrr prrrr! *\n";
	if (n % 2 == 1)
		std::cout<<this->Target<<" has been robotomized succesfully!\n";
	else
		std::cout<<"The robotomization has failed\n";
}

std::ostream	&operator << (std::ostream &out, const RobotomyRequestForm &RobotomyRequestForm)
{
	out<<"RobotomyRequestForm "<<RobotomyRequestForm.getName()<<"    Signed grade: "<<RobotomyRequestForm.getRank_s();
	out<<"    Execution grade: "<<RobotomyRequestForm.getRank_e()<<"    Status: ";
	if (RobotomyRequestForm.getStatus() == true)
		out<<"Signed";
	else
		out<<"Unsigned";
	return (out);
}
