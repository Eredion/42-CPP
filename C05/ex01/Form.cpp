#include "Form.hpp"

Form::Form(std::string const name, int rank_s, int rank_e):
Name(name), Sign(false), Rank_s(rank_s), Rank_e(rank_e)
{
		if (rank_s < 1 || rank_e < 1)
			throw Form::GradeTooHighException();
		if (rank_s > 150 || rank_e > 150)
			throw Form::GradeTooLowException();
}

Form::Form(): Name("Unnamed"), Sign(false), Rank_s(150), Rank_e(150)
{
	return ;
}

Form::~Form()
{
	return;
}

Form::Form(Form const &copy):
Name(copy.getName()), Rank_s(copy.getRank_s()), Rank_e(copy.getRank_s())
{
	this->Sign = copy.Sign;
	*this = copy;
}

Form	&Form::operator = (Form const &copy)
{
	this->Sign = copy.Sign;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->Name);
}

int		Form::getRank_s() const
{
	return (this->Rank_s);
}

int		Form::getRank_e() const
{
	return (this->Rank_e);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Error: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Error: Grade too Low";
}

bool		Form::getStatus() const
{
	return (this->Sign);
}

void	 Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getRank() > this->getRank_s())
		throw Form::GradeTooLowException();
	this->Sign = true;
}

std::ostream	&operator << (std::ostream &out, const Form &form)
{
	out<<"Form "<<form.getName()<<"    Signed grade: "<<form.getRank_s();
	out<<"    Execution grade: "<<form.getRank_e()<<"    Status: ";
	if (form.getStatus() == true)
		out<<"Signed";
	else
		out<<"Unsigned";
	return (out);
}
