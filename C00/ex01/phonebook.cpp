#include "phonebook.hpp"

void	shorter(std::string str)
{
	int len;
	int spaces;

	len = str.length();
	spaces = 10 - len;
	if (len < 11)
	{
		for (int i = 0; i < spaces; i++)
			std::cout << ' ';
		std::cout << str;
	}
	else if (len > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
}

void	search(contact *contacts, int max_index)
{
	if (max_index == 0)
	{
		std::cout << "You need to add a contact first" << std::endl;
		return;
	}
	for (int i = 0; i < max_index; i++)
	{
		std::cout << "|         "<< (i + 1) << '|';
		shorter(contacts[i].name);
		std::cout << '|';
		shorter(contacts[i].surname);
		std::cout << '|';
		shorter(contacts[i].nick);
		std::cout << "|\n";
	}
	std::cout << "Introduce the index of the contact: " << std::endl;
	int i;
	while (1)
	{
		std::cin >> i;
		if (i <= max_index && i > 0)
		{
			std::cout << "You have selected de contact " << i << std::endl;
			contacts[i - 1].print_contact();
			break ;
		}
		else
			std::cout << "Please, introduce a valid index" << std::endl;
	}
}

void	add(contact *cont)
{
	std::string info[11] {"First name: ", "Last name: ", "Nickname: ", "Login: ",
			"Postal address: ", "Email address: ", "Phone number: ",
			"Birthday date: ", "Favourite meal: ", "Underwear color: ",
			"Darkest secret: "};
	std::string line;

	std::cout<<"Adding a new contact..."<<std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout<< info[i] << std::endl;
		getline(std::cin, line);
		cont->add_contact(i, line);
	}
	std::cout << "Contact added, you have room for ";
}

int 	main()
{
	int 	i;
	contact contacts[8];
	std::string line;
	int		ok;

	std::cout<<"Welcome to your awesome phonebook, ";
	std::cout<< "you can store the huge amount of 8 contacts"<<std::endl;
	i = 0;
	while(1)
	{
		ok = 0;
		getline(std::cin, line);
		if (line.compare("EXIT") == 0)
		{
			std::cout<<"Closing program"<<std::endl;
			return (0);
		}
		else if (line.compare("ADD") == 0)
		{
			if (i == 8)
				std::cout<<"Your phonebook is full"<<std::endl;
			else
			{
				add(&contacts[i]);
				std::cout << (7 - i++) << " more contacts" << std::endl;
			}
		}
		else if (line.compare("SEARCH") == 0)
		{
			search(contacts, i);
			std::cout << "End of search\n" << std::endl;
		}
		else
			std::cout<<"Introduce a valid command: ADD, SEARCH or EXIT"<<std::endl;
	}
}
