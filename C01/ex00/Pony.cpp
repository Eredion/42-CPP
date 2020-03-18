#include "Pony.hpp"

void  Pony::pony_name(std::string str)
{
	name = str;
}

void  Pony::pony_color(std::string str)
{
	color = str;
}

void  Pony::pony_age(std::string str)
{
	age = str;
}

void  Pony::pony_print()
{
	std::cout<<"Name: "<< name << std::endl;
	std::cout<<"Color: "<< color << std::endl;
	std::cout<<"Age: "<< age << std::endl;
}

Pony::~Pony()
{
	return ;
}
