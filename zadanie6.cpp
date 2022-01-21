#include <iostream>
#include <string>


bool is_divisible(int y,int z)
{	   
    if(y%z==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_even(int x)
{   
    
	return is_divisible(x, 2);

}

int a,b;

auto main(int argc, char* argv[]) -> int
{	
	
	std::cout << "Podaj liczbe: " << "\n";
	std::cin >> a;
	
	
	if(is_even(a)==1)
    {
        std::cout <<  "Liczba jest podzielna przez 2" << "\n";
    }
    else
    {
        std::cout << "Liczba nie jest podzielna przez 2" << "\n";
    }
	
	return 0;
}
