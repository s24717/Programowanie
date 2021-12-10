#include <iostream>
#include <string>




std::string imie,imie2;



auto main(int argc, char* argv[]) -> int
{

	std::cout << "Podaj Imie: " << "\n";
	std::cin >> imie;
	std::cout << "Podaj drugie imie: " << "\n";
	std::cin >> imie2;

	
	if(imie.length() > imie2.length())
	{
		std::cout << "Pierwsze imie jest dluzsze od drugiego!"<< "\n";
	}
	else if(imie.length() < imie2.length())
	{
		std::cout << "Drugie imie jest dluzsze od Pierwszego..."<< "\n";
	}
	else if(imie.length() == imie2.length())
	{
		std::cout << "Oba imiona maja taka sama dlugosc."<< "\n";
	}
	
	

	
	return 0;
}
