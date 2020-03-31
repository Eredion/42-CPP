#include "Array.hpp"


int main(void)
{

	Array<int> intR;
	std::cout<<"Creating a void Array\n";
	Array<int> intRR(5);
	intR = intRR;
	std::cout<<"Using Arr = Arr\n";
	std::cout<<"Modifying arr\n";
	for (size_t i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}
	std::cout << std::endl;
	std::cout<<"Checking if the source is modified\n";
	for (size_t i = 0; i < intRR.size(); i++)
	{
		std::cout << intRR[i] << " ";
	}
	std::cout << std::endl;
	std::cout<<"Trying more data types\n";
	Array<float> floatR(25);
	for (size_t i = 0; i < floatR.size(); i++)
	{
		std::cout << floatR[i] << "f ";
	}
	std::cout << std::endl;

	Array<std::string> stringR(5);
	for (size_t i = 0; i < stringR.size(); i++)
	{
		stringR[i] = std::to_string(i);
		std::cout << stringR[i] << "s ";
	}
	std::cout << std::endl;
	std::cout<<"Trying invalid index\n";
	try
	{
		intRR[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		intRR[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
