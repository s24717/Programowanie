#include <string>
#include <iostream>

std::string haslo;
std::string a;

auto main() -> int
{
	std::cout << "Witam na naszej stronie!!" << "\n";
	do
	{	
		std::cout << "Haslo: "; std::getline(std::cin, a);
	}
	while(a!="student");
	std::cout << "Podales poprawne ponowne haslo"<< "\n";
	return 0;
}
		
