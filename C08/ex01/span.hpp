#ifndef SPAN_HPP
# define SPAN_HPP

#include <set>
#include <exception>
#include <algorithm>
#include <climits>
#include <iostream>

class Span
{
	public:
			unsigned int 	max_size;
			std::set<int>	set;
			Span();
			Span(unsigned int N);
			~Span();
			Span(Span const &copy);
			Span	&operator = (Span const &copy);
			void	addNumber(int n);
			int		shortestSpan();
			int		longestSpan();
};

#endif
