#include <iostream>
#include <string>

int needle;
int liczba=0;
int tablica[10] = {42, 9 , -1 , 18, 59, 3, 101, 31, 72, 12};

void search(int b)
{
	for(int i=0;i<=9;i++)
	{
		if(tablica[i]==b)
		{
			std::cout << i << "\n";
			break;
		}
		else if(i==9&&tablica[i]!=b)
		{
			std::cout << "-1" << "\n";
		}	
	}
	

}


auto main(int argc, char* argv[]) -> int
{
	
	needle = std::stoi(argv[1]);
	search(needle);
	
	return 0;
}
