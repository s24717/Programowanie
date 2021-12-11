#include <iostream>
#include <string>


auto count_chars(std::string x,char y)
{	
	int suma=0;
	
	for(int i=0;i<x.length();i++)
	{
		if(x[i] == y)
		{
			suma=suma+1;
		}
	}
	
	return suma;

}

std::string a;
char b;

auto main(int argc, char* argv[]) -> int
{	
	
	std::cout << "Podaj napis: " << "\n";
	std::cin >> a;
	std::cout << "Podaj chara ktorego bedziemy szukac: " << "\n";
	std::cin >> b;
	
	std::cout << count_chars(a, b) << "\n";
	
	return 0;
}
