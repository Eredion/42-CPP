#include <iostream>

struct Data
{
	std::string s1;
	int			n;
	std::string s2;
};

void *serialize(void)
{
	char	set[63] =
				{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"};
	char	*serie;

	serie = new char[20];
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		if (i == 8)
		{
			*reinterpret_cast<int *>(serie + 8) = rand();
			i += 4;
		}
		serie[i] = set[rand() % 62];
	}
	return (serie);
}

Data	*deserialize(void *serie)
{
	Data	*data;
	char	*s;
	data = new Data;

	s = reinterpret_cast<char *>(serie);
	data->s1 = std::string(s, 8);
	data->n  = *reinterpret_cast<int *>(s + 8);
	data->s2 = std::string(s + 12, 8);
	return (data);

}

int		main(void)
{
	void *s;
	Data *d;

	s = serialize();
	d = deserialize(s);
	std::cout << s << std::endl;
	std::cout << "S1 : "<<d->s1<<std::endl;
	std::cout << "n : "<<d->n<<std::endl;
	std::cout << "S2 : "<<d->s2<<std::endl;
}
