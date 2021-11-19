#include <iostream>
#include <string>

int a;
int iloczyn=1;
auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);
	
	
	for(int i=1;i<=a;i++)
	{
		iloczyn=iloczyn*i;
	}
	
	std::cout << iloczyn << "\n";
	

	return 0;
}
