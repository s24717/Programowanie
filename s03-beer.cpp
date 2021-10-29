#include <iostream>
#include <string>
int a;
int b;

auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);
	b=a;
	for(int i=a; i>=1; i--)
	{		if(a>0)
			{
				std::cout << i << " bottles of beer on the wall " << i << " bottles of beer." << "\n";
				std::cout << "Take one down,pass it around, " << i-1 << " bottles of beer on the wall..." << "\n";
			}
		
	}
	
	std::cout << "No more bottles of beer on the wall, no more bottles of beer." << "\n";
	std::cout << "Go to the store and buy some more, " << b << " bottles of beer on the wall..." << "\n";
	return 0;
}
