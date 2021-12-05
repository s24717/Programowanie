#include <iostream>
#include <string>



void print(std::string *pomocnicza)
{
	std::cout << &pomocnicza << " = " << *pomocnicza << "\n";
}




auto main(int argc, char* argv[]) -> int
{	
	std::string a;
	std::cout << "Podaj slowo: " << "\n";
	getline(std::cin, a);
	
	print(&a);
	return 0;
}
