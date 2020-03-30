# include "Base.hpp"

Base *generate(void)
{
	int n;
	Base *base;

	srand(time(0));
	n = rand() % 3;
	if (n == 1)
		return (base = new A);
	else if (n == 2)
		return (base = new B);
	else
		return (base = new C);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
}

void	identify_from_reference(Base &p)
{
	Base aux;
	try
	{
		aux = dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(std::bad_cast exp) {}
	try
	{
		aux = dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch(std::bad_cast exp) {}
	try
	{
		aux = dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch(std::bad_cast exp) {};
}

int		main(void)
{
		Base *b = generate();

		std::cout <<"Ptr ";
		identify_from_pointer(b);
		std::cout << "\nRef ";
		identify_from_reference(*b);
		std::cout << std::endl;
		delete b;
}
