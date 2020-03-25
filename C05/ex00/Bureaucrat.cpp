#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int rank)
{
	this->Name = name;
		if (rank < 1)
			throw Bureaucrat::GradeTooHighException();
		if (rank > 150)
			throw Bureaucrat::GradeTooLowException();
		this->Rank = rank;
}

Bureaucrat::Bureaucrat()
{
	this->Name = "Unnamed";
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
	this->Name = copy.Name;
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
	return "Error: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Grade too Low";
}

std::ostream	&operator << (std::ostream &out, const Bureaucrat &bur)
{
	out<<bur.getName()<<", bureucrat grade "<<bur.getRank();
	return (out);
}
