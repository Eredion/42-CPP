#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <unistd.h>

class contact
{
	public:
	~contact();
	std::string name;
	std::string surname;
	std::string nick;
	std::string login;
	std::string cp;
	std::string email;
	std::string phone;
	std::string birth;
	std::string meal;
	std::string color;
	std::string secret;
	void	add_contact(int i, std::string input);
	void	print_contact();
};


#endif
