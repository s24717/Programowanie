#include <iostream>
#include <string>

auto is_even(int b)
{
	if(b%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int a;

auto main(int argc, char* argv[]) -> int
{	
	
	std::cout << "Podaj Liczbe: " << "\n";
	std::cin >> a;
	
	std::cout << is_even(a) << "\n";
	
	return 0;
}
