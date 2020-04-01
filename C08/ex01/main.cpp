# include "span.hpp"

int		main(void)
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout<< "Added: 5, 3, 17, 9, 11\n";

	std::set<int>::iterator it;
	it = sp.set.begin();
	std::cout<<"Iterate: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout<<*it<<", ";
		it++;
	}
	std::cout << "\nLongest : "<<sp.longestSpan() << std::endl;
	std::cout << "Shortest : "<<sp.shortestSpan() << std::endl;
	std::cout << "Trying longest with 1 number\n";
	Span sp2 = Span(1);
	sp2.addNumber(1);
	sp2.longestSpan();

}
