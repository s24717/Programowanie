#include <iostream>
#include <string>


int suma=0;
auto main(int argc, char* argv[]) -> int
{
	int tab[argc];
	
	for(int i=1;i<argc;i++)
	{
		tab[i-1] = std::stoi(argv[i]);
	}
	
	for(int i=1;i<=tab[0];i++)
	{
		int a=i%tab[1];
		
		if(a==0)
		{
			suma=suma + i;
		}
		
	}
	
	std::cout << suma << "\n";

	return 0;
}
