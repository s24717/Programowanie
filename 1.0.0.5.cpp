#include <iostream>

int a,b;
auto main(int argc, char* argv[]) -> int
{

a = std::stoi(argv[1]);
b = std::stoi(argv[2]);
if(a == b)
{
	std::cout << a << "=" << b << "\n";
}
else if(a > b)
{
	std::cout << a << ">" << b << "\n";	
}
else if(a < b)
{
	std::cout << a << "<" << b << "\n";	
}	

	
return 0;	
}
