#include <iostream>
#include <string>
int a,b;
int tab[100];

void iota(int zmienna, int zmienna2)
{
    for(int i=zmienna2;i<zmienna+zmienna2;i++)
    {   
        tab[i] = i;
        std::cout << tab[i] << "\n";
    }
}


auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);
    b = std::stoi(argv[2]);
    iota(a, b);

	return 0;
}
