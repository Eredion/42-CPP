#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			std::string const Name;
			bool		Sign;
			int			const Rank_s;
			int			const Rank_e;
	public:
			Form(std::string const name, int rank_s, int rank_e);
			Form();
			~Form();
			Form(Form const &copy);
			Form	&operator = (Form const &copy);
			std::string	getName() const;
			int			getRank_s() const;
			int			getRank_e() const;
			bool		getStatus() const;
			void beSigned(const Bureaucrat &bur);
			class GradeTooHighException : public std::exception
			{
				virtual const char* what() const throw();
			};
			class GradeTooLowException : public std::exception
			{
				virtual const char* what() const throw();
			};
};

std::ostream &operator << (std::ostream &out, const Form &bur);

#endif
