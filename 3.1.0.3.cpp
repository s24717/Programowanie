#include <iostream>
#include <string>

int a=3;
int suma=0;
int tablica[10] = {42, 9 , -1 , 18, 59, 3, 101, 31, 72, 12};

void wynik(int b)
{
	for(int i=0;i<=9;i++)
	{
		suma=suma+tablica[i];
	}
	
	std::cout << suma << "\n";
}


auto main(int argc, char* argv[]) -> int
{
	
	std::cout << "wynik sumy tablicy to:";
	wynik(a);
	
	return 0;
}
