#include <iostream>
#include <string>


auto is_divisible(int y,int z)
{	
	int c = y%z;
	return c;
}

auto is_even(int x)
{
	if(x%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int a,b;

auto main(int argc, char* argv[]) -> int
{	
	
	std::cout << "Podaj  2 liczby: " << "\n";
	std::cin >> a;
	std::cin >> b;
	
	std::cout << is_even(is_divisible(a, b)) << "\n";
	
	return 0;
}
