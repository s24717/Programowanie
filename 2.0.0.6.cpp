#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	int tab[argc];
	
	for(int i=1;i<argc;i++)
	{
		tab[i-1] = std::stoi(argv[i]);
	}
	
	for(int i=1;i<argc-1;i++)
	{
		if(tab[0] == tab[i])
		{
			std::cout << tab[0] << "=" << tab[i] << "\n";
		}
		else if(tab[0] > tab[i])
		{
			std::cout << tab[0] << ">" << tab[i] << "\n";	
		}
		else if(tab[0] < tab[i])
		{
			std::cout << tab[0] << "<" << tab[i] << "\n";	
		}	
	}

	return 0;
}
