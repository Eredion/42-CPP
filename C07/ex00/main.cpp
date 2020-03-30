# include "whatever.cpp"

int		main(void)
{
	int n = 3;
	int m = 10;

	std::cout<<"max("<<n<<", "<<m<<") = "<<max(n, m)<<std::endl;
	std::cout<<"min("<<n<<", "<<m<<") = "<<min(n, m)<<std::endl;
	std::cout<<"swap(x = "<<n<<", y = "<<m<<") x = ";
	swap(n, m);
	std::cout<<n<<" y = "<<m<<std::endl;
}
