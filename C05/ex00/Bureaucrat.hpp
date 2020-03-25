#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
			std::string Name;
			int			Rank;
	public:
			Bureaucrat(std::string name, int rank);
			Bureaucrat();
			~Bureaucrat();
			Bureaucrat(Bureaucrat const &copy);
			Bureaucrat	&operator = (Bureaucrat const &copy);
			std::string	getName() const;
			int			getRank() const;
			void		incRank();
			void		decRank();

			class GradeTooHighException : public std::exception
			{
				virtual const char* what() const throw();
			};
			class GradeTooLowException : public std::exception
			{
				virtual const char* what() const throw();
			};
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &bur);

#endif
