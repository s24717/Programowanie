#include <string>
#include <iostream>

std::string haslo;
std::string a;

int main()
{
	std::cout << "Witam na naszej stronie!!" << "\n";
	std::cout << "Podaj Haslo: ";
	std::cin >> haslo;
	std::cout << "Podaj Ponownie Haslo:" << "\n";
	while(a!=haslo)
	{	
		std::cout << "Haslo: "; std::cin >> a;
	}
	std::cout << "Podales poprawne ponowne haslo"<< "\n";
	return 0;
}
		
