#include <iostream>
#include <string>

std::string liczba;
int a;
auto main(int argc, char* argv[]) -> int
{

	
	a = std::stoi(argv[1]);
	
	for(int i=a; i>-1; i=i-1)
	{
		std::cout << i << "..." << "\n";
	}
	
	return 0;
}
