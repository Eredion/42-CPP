#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include <fstream>
# include <string>


class PresidentialPardonForm : public Form
{
	private:
			std::string		Target;
	public:
			PresidentialPardonForm(std::string const target);
			PresidentialPardonForm();
			~PresidentialPardonForm();
			PresidentialPardonForm(PresidentialPardonForm const &copy);
			Form	&operator = (Form const &copy);
			void	action() const;
};
#endif
