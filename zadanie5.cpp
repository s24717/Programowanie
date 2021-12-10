#include <iostream>
#include <string>

void is_even(int b)
{
	if(b%2==0)
	{
		std::cout << "True" << "\n";
	}
	else
	{
		std::cout << "False" << "\n";
	}
}

int a;

auto main(int argc, char* argv[]) -> int
{	
	
	std::cout << "Podaj Liczbe: " << "\n";
	std::cin >> a;
	
	is_even(a);
	
	return 0;
}
