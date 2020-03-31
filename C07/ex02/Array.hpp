#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename t>
class Array
{
	private:
			t		*arr;
			size_t	Size;
	public:
			Array(): arr(NULL), Size(0) {};
			Array(size_t size): Size(size)
			{
				t	*aux;

				aux = new t[size];
				this->arr = aux;
			}
			Array(Array const &copy)
			{
				t	*aux;

				this->~Array();
				this->Size = copy.Size;
				aux = new t[this->size()];
				for (size_t i = 0; i < copy.Size; i++)
					aux[i] = copy.arr[i];
				this->arr = aux;
			}
			~Array()
			{
				if (this->size() > 0)
					delete[] this->arr;
			};
			Array &operator = (Array const &copy)
			{
				t	*aux;

				this->~Array();
				this->Size = copy.Size;
				aux = new t[this->size()];
				for (size_t i = 0; i < copy.Size; i++)
					aux[i] = copy.arr[i];
				this->arr = aux;
				return (*this);
			}
			size_t	size()
			{
				return (this->Size);
			}
			t &operator [](size_t index)
			{
				if (index >= this->size())
					throw std::exception();
				else
					return (this->arr[index]);

			}
};

#endif
