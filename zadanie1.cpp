#include <iostream>
#include <string>


int suma=0;
int a;

std::string c;


auto main(int argc, char* argv[]) -> int
{

	for(int i=2; i<=20;i++)
	{	
		for(int j=2; j<=i;j++)
		{	
			a = i%j;
			if(a==0)
			{
				suma = suma + 1;
			}
		}
		if(suma == 1)
		{	std::string str = std::to_string(i);
			c = c + str + " ";
		}
		suma = 0;
	}
	
	std::cout << c << "\n";
	std::cout << c << "\n";

	
	return 0;
}
