#include <iostream>
#include <string>


auto main(int argc, char* argv[]) -> int
{
	
	std::string wyraz = "Hello, World!.";
	
	std::cout << "Adres wskaznika zdania Hello, Wordl to: " << &wyraz << "\n";
	
	return 0;
}
