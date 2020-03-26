#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"
# include <fstream>
# include <string>


class RobotomyRequestForm : public Form
{
	private:
			std::string		Target;
	public:
			RobotomyRequestForm(std::string const target);
			RobotomyRequestForm();
			~RobotomyRequestForm();
			RobotomyRequestForm(RobotomyRequestForm const &copy);
			Form	&operator = (Form const &copy);
			void	action() const;
};
#endif
