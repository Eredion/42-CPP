#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target):
Form("PresiPardon", 25, 5)
{
	this->Target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm():
PresidentialPardonForm::PresidentialPardonForm("Undef_target")
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy):
Form(copy.getName(), copy.getRank_s(), copy.getRank_s())
{
	*this = copy;
}

void	PresidentialPardonForm::action() const
{
	std::cout<<this->Target<<" has been pardoned by Zafod Beeblebrox\n";
}

std::ostream	&operator << (std::ostream &out, const PresidentialPardonForm &PresidentialPardonForm)
{
	out<<"PresidentialPardonForm "<<PresidentialPardonForm.getName()<<"    Signed grade: "<<PresidentialPardonForm.getRank_s();
	out<<"    Execution grade: "<<PresidentialPardonForm.getRank_e()<<"    Status: ";
	if (PresidentialPardonForm.getStatus() == true)
		out<<"Signed";
	else
		out<<"Unsigned";
	return (out);
}
