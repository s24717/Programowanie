#include <iostream>
#include <string>

int a;
int b=0;
int iloczyn=1;
auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);
	    
    for (int i = 0; i < a;i++)
    {	
		b=b+1;
		
        for (int j = 0; j < b; j++)
        {
           std::cout << "*";
        }
        
        std::cout << "\n";
    }
	

	
	

	return 0;
}
