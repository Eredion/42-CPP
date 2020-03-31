# include "whatever.cpp"

int		main(void)
{
	int n = 3;
	int m = 10;

	std::cout<<"max("<<n<<", "<<m<<") = "<<max(n, m)<<std::endl;
	std::cout<<"min("<<n<<", "<<m<<") = "<<min(n, m)<<std::endl;
	std::cout<<"swap(x = "<<n<<", y = "<<m<<") x = ";
	swap(n, m);
	std::cout<<n<<" y = "<<m<<std::endl<<std::endl;


	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}
