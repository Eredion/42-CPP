#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include <fstream>
# include <string>


class ShrubberyCreationForm : public Form
{
	private:
			std::string		Target;
	public:
			ShrubberyCreationForm(std::string const target);
			ShrubberyCreationForm();
			~ShrubberyCreationForm();
			ShrubberyCreationForm(ShrubberyCreationForm const &copy);
			Form	&operator = (Form const &copy);
			void	action() const;
};
#endif
