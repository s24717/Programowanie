#include <iostream>

int a,b,c;
auto main(int argc, char* argv[]) -> int
{
a = std::stoi(argv[1]);
b = std::stoi(argv[2]);
c = std::stoi(argv[3]);
if((a>b) && (a>c))
{
    std::cout << a << "\n";
}
else if((b>a) && (b>c))
{
    std::cout << b << "\n";
}
else if((c>b) && (c>a))
{
    std::cout << c << "\n";
}

	
return 0;	
}
