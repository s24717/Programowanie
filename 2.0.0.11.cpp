#include <iostream>
#include <string>

int a,b;
int i=1;
int iloczyn=1;
auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);
	b = std::stoi(argv[2]);
	    
    for (int i = 0; i < a;i++)
    {
        for (int j = 0; j < b; j++)
        {
           std::cout << "*";
        }
        
        std::cout << "\n";
    }
	

	
	

	return 0;
}
