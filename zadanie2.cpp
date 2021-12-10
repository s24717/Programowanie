#include <iostream>
#include <string>




std::string imie;
double waga;
int wzrost;


auto main(int argc, char* argv[]) -> int
{

	std::cout << "Podaj Imie: " << "\n";
	std::cin >> imie;
	std::cout << "Podaj wage: " << "\n";
	std::cin >> waga;
	std::cout << "Podaj wzrost: " << "\n";
	std::cin >> wzrost;
	
	
	std::cout << "Imie: " << "[" << imie << "]" << std::endl;
	std::cout << "\n";
	std::cout << "Waga: " << "[" << waga << "] " << "kg" << std::endl;
	std::cout << "\n";
	std::cout << "Wzrost: " << "[" << wzrost << "] " << "cm" << std::endl;
	

	
	return 0;
}
