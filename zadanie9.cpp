#include <iostream>
#include <string>

auto is_palindrome(std::string x)
{	
	int suma=0;
	
	for(int i=0; i<x.length()-1;i++)
	{
		if(x[i] == x[x.length()-1-i])
		{
			suma=suma+1;
		}
		else
		{
			break;
		}		
	}
	
	if(suma==x.length()-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}


std::string a;


auto main(int argc, char* argv[]) -> int
{	
	
	std::cout << "Podaj napis: " << "\n";
	std::cin >> a;
	
	
	std::cout << is_palindrome(a) << "\n";
	
	return 0;
}
