#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
			MutantStack();
			virtual ~MutantStack();
			MutantStack(std::stack<T> const &copy);
			MutantStack(MutantStack const &copy);
			MutantStack &operator = (std::stack<T> const &copy);

			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin();
			iterator end();
};

#endif
