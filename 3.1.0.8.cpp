#include <iostream>
#include <string>
int xd,a;

int tablica[10] = {42, 9 , -1 , 18, 59, 3, 101, 31, 72, 12};


void sort_asc(int b)
{
	for(int i=0;i<=9;i++)
	{
		//tutaj iteruje sie po tablicy 0 1 2 3 i tak dalej
		
		for(int j=0;j<=9;j++)
		{
			//o tak tutaj bedziemy wybrany podmiot porownywac z innymi podmiotami w tablicy
			if(tablica[i] > tablica[j])
			{
				xd =  tablica[i];
				tablica[i] = tablica[j];
				tablica[j] = xd;
			}
			else
			{
				continue;
			}	
		}
	}
}


auto main(int argc, char* argv[]) -> int
{
	
	std::cout << "o to tablica nasza kochana: " << "\n";
	sort_asc(a);
	
	
	
	
	for(int k=0;k<=9;k++)
	{
		std::cout << tablica[k] << "\n";
	}
	return 0;
}
