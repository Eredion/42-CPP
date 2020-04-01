# include "span.hpp"

Span::Span(unsigned int N): max_size(N) {}

Span::Span(): max_size(0) {}

Span::~Span()
{
	this->set.clear();
}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span	&Span::operator = (Span const &copy)
{
	this->set.clear();
	Span(copy.max_size);
	this->set = copy.set;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (!n || this->set.size() >= this->max_size)
		throw std::exception();
	this->set.insert(n);
}

int		Span::longestSpan()
{
	if (this->max_size <= 1)
		throw std::exception();

	int	big;
	int small;

	std::set<int>::iterator it = this->set.begin();
	for (unsigned i = 0; i < this->set.size(); i++)
	{
		big = *it;
		it++;
	}
	small = *this->set.begin();
	return (big - small);
}

int		Span::shortestSpan()
{
	if (this->set.size() <= 1)
		throw std::exception();

	std::set<int>::iterator it, it2;
	int						mindiff, diff;

	it = this->set.begin();
	it2 = ++this->set.begin();
	mindiff = abs(*it - *it2);
	while (it2 != this->set.end())
	{
		diff = abs(*it - *it2);
		if (diff < mindiff)
			mindiff = diff;
		it++;
		it2++;
	}
	return (mindiff);
}
