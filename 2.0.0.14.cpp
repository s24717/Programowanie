#include <iostream>
#include <string>

int a,b;
auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);
	b = std::stoi(argv[2]);
	    
    for (int i =1; i <=a;i++)
    {	
		if(i==1)
		{
			for (int j = 0; j < b; j++)
			{
			   std::cout << "*";
			}
		}
		else if(i>1 && i<a)
		{
			for (int j=1;j<=b;j++)
			{
				if(j==1)
				{
					std::cout << "*";
				}
				else if(j > 1 && j < b)
				{
					std::cout << " ";
				}
				else if(j==b)
				{
					std::cout << "*";
				}
			}
		}
		else if(i==a)
		{
			for (int j = 0; j < b; j++)
			{
			   std::cout << "*";
			}
		}
        
        std::cout << "\n";
    }
	

	
	

	return 0;
}
