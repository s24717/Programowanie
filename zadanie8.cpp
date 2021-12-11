#include <iostream>
#include <string>


void showmaker(std::string x,int y)
{	
	int suma=0;
	char tab[x.length()];
	
	
	for(int i=0;i<x.length();i++)
	{
		tab[i] = x[i];
		suma=suma+1;
	}
	
	char tabn[x.length()];
	int k=0;
	
	for(int j=0;j<x.length();j=j+y)
	{	
		tabn[k] = tab[j];
		k++;
	}
	
	
	std::cout << tabn << "\n";
	
	
}

std::string a;
int b;

auto main(int argc, char* argv[]) -> int
{	
	
	std::cout << "Podaj napis: " << "\n";
	std::cin >> a;
	std::cout << "Podaj co ile index ma sie zmieniac: " << "\n";
	std::cin >> b;
	
	showmaker(a, b);
	
	return 0;
}
