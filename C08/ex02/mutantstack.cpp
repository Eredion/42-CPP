# include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(std::stack<T> const &copy): std::stack<T>(copy) {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &copy): std::stack<T>(copy) {}

template<typename T>
MutantStack<T>		&MutantStack<T>::operator = (std::stack<T> const &copy)
{
	return (std::stack<T>(copy));
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}
