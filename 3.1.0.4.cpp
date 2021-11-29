#include <iostream>
#include <string>

int a=3;
int liczba=0;
int tablica[10] = {42, 9 , -1 , 18, 59, 3, 101, 31, 72, 12};

void wynik(int b)
{
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			if(tablica[i] < tablica[j])
			{	
				if(tablica[i] < liczba)
				{
					liczba = tablica[i];
					break;
				}
				else
				{
					continue;
				}
			}
			else if(tablica[i] > tablica[j])
			{
				continue;
				
			}
		}			
	}
	
	std::cout << liczba << "\n";
}


auto main(int argc, char* argv[]) -> int
{
	
	std::cout << "najmniejsza liczba w tablicy to:";
	wynik(a);
	
	return 0;
}
