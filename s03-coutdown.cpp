#include <iostream>

int liczba;

int main()
{
	std::cout << "Podaj liczbe: " << "\n";
	std::cin >> liczba;
	
	for(int i=liczba; i>-1; i=i-1)
	{
		std::cout << i << "..." << "\n";
	}
	
	return 0;
}
