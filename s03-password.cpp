#include <string>
#include <iostream>

std::string a;
std::string b;
auto main(int argc, char* argv[]) -> int
{
	b = argv[1];
	if(b=="student")
	{
		std::cout << "Podales poprawne ponowne haslo"<< "\n";
	}
	else
	{
		do
		{	
			std::cout << "Haslo: "; std::getline(std::cin, a);
		}
		while(a!="student");
		std::cout << "Podales poprawne ponowne haslo"<< "\n";
	}	
	return 0;
}
