#include <iostream>
#include <string>

int a;
int i=1;
int iloczyn=1;
auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);
	
	
	do
	{
		iloczyn=iloczyn*i;
		i++;
	}while(i<=a);
	
	std::cout << iloczyn << "\n";
	

	return 0;
}
