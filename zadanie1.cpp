#include <iostream>
#include <string>



int suma=0;
int a;
int b=0;
int tab[20];
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
		if(suma ==1)
		{	
			tab[b] = i;
			b=b+1;
		}
		suma = 0;
	}
	
	for(int i=0;i<b;i++)
	{
		std::cout << tab[i] << " ";
		if(i==b-1)
		{
			std::cout << "\n";
			for(int j=0;j<b;j++)
			{
				std::cout << tab[j] << " ";
			}
		}
	}
	
	return 0;
}
