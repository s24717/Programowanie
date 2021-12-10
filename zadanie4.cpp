#include <iostream>
#include <string>




std::string imie;
int dziewczyny=0;
int chlopaki=0;



auto main(int argc, char* argv[]) -> int
{

	for(int i=0;i<5;i++)
	{
		std::getline(std::cin,imie);
		
		if(imie[imie.length()-1]== 'a' && imie != "Kuba" && imie != "Barnaba")
		{
			dziewczyny=dziewczyny + 1;
		}
		else
		{
			chlopaki=chlopaki +1;
		}	
		
	}
	

	std::cout << "Zenskich imion jest: " << dziewczyny << "\n";
	std::cout << "Meskich imion jest: " << chlopaki << "\n";
	
	return 0;
}
