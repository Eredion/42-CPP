# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int rank): Name(name)
{
		if (rank < 1)
			throw Bureaucrat::GradeTooHighException();
		if (rank > 150)
			throw Bureaucrat::GradeTooLowException();
		this->Rank = rank;
}

Bureaucrat::Bureaucrat(): Name("Unnamed")
{
	this->Rank = 150;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator = (Bureaucrat const &copy)
{
	this->Rank = copy.Rank;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->Name);
}

int		Bureaucrat::getRank() const
{
	return (this->Rank);
}

void	Bureaucrat::incRank()
{
	if (this->getRank() < 2)
		throw Bureaucrat::GradeTooHighException();
	this->Rank--;
}

void	Bureaucrat::decRank()
{
	if (this->getRank() > 149)
		throw Bureaucrat::GradeTooLowException();
	this->Rank++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat Error: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat Error: Grade too Low";
}

std::ostream	&operator << (std::ostream &out, const Bureaucrat &bur)
{
	out<<bur.getName()<<", bureucrat grade "<<bur.getRank();
	return (out);
}

void	Bureaucrat::signForm(Form &form)
{
	if(this->getRank() > form.getRank_s())
	{
		std::cout<<"Bureaucrat "<<this->getName()<<" cannot sign form "<<
		form.getName()<<" because form is "<<this->getRank() - form.getRank_s()
		<<" grades higher\n";
	}
	else
	{
		std::cout<<"Bureaucrat "<<this->getName()<<" signs form "
		<<form.getName()<<std::endl;
		form.beSigned(*this);
	}
}

void		Bureaucrat::executeForm(Form const &form)
{
	if (form.getStatus() == false)
	{
		std::cout<<"Unsigned form\n";
		return ;
	}
	try
	{
		form.execute(*this);
		std::cout<<"Bureaucrat "<<this->getName()<<
		" executes "<<form.getName()<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
