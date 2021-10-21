#include <iostream>
#include <cstdlib>
#include <time.h>

int jakas_randomowa_liczba;
int liczba;

int main()
{	srand(time(NULL));
	jakas_randomowa_liczba = rand()%100+1;
	std::cout << "System wybral liczbe z przedzialu 1-100 sprobuj ja zgnadnac: " << "\n";
	
	do
	{
		std::cout << "quess: "; std::cin >> liczba;
		
		if(liczba > jakas_randomowa_liczba)
		{
			std::cout << "number too big!" << "\n";
		}
		else if(liczba < jakas_randomowa_liczba)
		{
			std::cout << "number too small!" << "\n";	
		}
	}while(liczba!=jakas_randomowa_liczba);
	std::cout << "just right!" << "\n";
	return 0;
}
