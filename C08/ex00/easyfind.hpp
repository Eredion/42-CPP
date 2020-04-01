#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <algorithm>

template <typename T>
void	easyfind(T &cont, int i)
{
    typename    T::const_iterator t;

    t = std::find(cont.begin(), cont.end(), i);
    if (t != cont.end())
        std::cout << "Value "<<i<<" exists in the container" << std::endl;
    else
    	std::cout <<"Value doesn't exist in the container.\n";
}

#endif
