#include <iostream>
#include <string>
int a;
int tab[100];

void init(int zmienna)
{
    for(int i=0;i<=a;i++)
    {
        tab[i] = 0;
    }
}


auto main(int argc, char* argv[]) -> int
{
	a = std::stoi(argv[1]);

    init(a);

	return 0;
}
