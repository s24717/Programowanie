#include <iostream>
#include <cstdlib>
#include <time.h>

int jakas_randomowa_liczba;
int liczba;


auto main(int argc, char* argv[]) -> int
{	srand(time(NULL));
	jakas_randomowa_liczba = rand()%100+1;
	
	
    
	do
		{
			
			if(liczba > jakas_randomowa_liczba)
			{
				std::cout << "number too big!" << "\n";
			}
			else if(liczba < jakas_randomowa_liczba)
			{
				std::cout << "number too small!" << "\n";	
			}
			
			std::cout << "quess: "; std::cin >> liczba;
			
		}while(liczba!=jakas_randomowa_liczba);
		
		std::cout << "just right!" << "\n";
	
		
	return 0;
	
}
