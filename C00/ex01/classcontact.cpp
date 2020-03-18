# include "phonebook.hpp"

contact::~contact()
{
	return ;
}

void	contact::print_contact()
{
	std::cout << "First name: " << name << std::endl;
	std::cout << "Last name: " << surname << std::endl;
	std::cout << "Nickname: " << nick << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << cp << std::endl;
	std::cout << "Email address: " << email << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Birthday date: " << birth << std::endl;
	std::cout << "Favourite meal: " << meal << std::endl;
	std::cout << "Underwear color: " << color << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl;
}

void	contact::add_contact(int i, std::string input)
{
	if (i == 0)
		name = input;
	else if (i == 1)
		surname = input;
	else if (i == 2)
		nick = input;
	else if (i == 3)
		login = input;
	else if (i == 4)
		cp = input;
	else if (i == 5)
		email = input;
	else if (i == 6)
		phone = input;
	else if (i == 7)
		birth = input;
	else if (i == 8)
		meal = input;
	else if (i == 9)
		color = input;
	else if (i == 10)
		secret = input;
}
