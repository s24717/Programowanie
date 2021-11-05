#include <iostream>

int a;
auto main(int argc, char* argv[]) -> int
{
a = std::stoi(argv[1]);

if(a == 0)
{
	std::cout << "0" << "\n";
}
else if(a > 0)
{
	std::cout << "1" << "\n";	
}
else if(a < 0)
{
	std::cout << "-1" << "\n";	
}	

	
return 0;	
}
