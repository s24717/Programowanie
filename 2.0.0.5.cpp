#include <iostream>
#include <string>
#include <cmath>


auto get() -> int
{
    auto temp = std::string{};
    std::cout << "Podaj liczbe: ";
    std::getline(std::cin, temp);
    return stoi(temp);
}

auto main() -> int
{     
	auto a = get();
    auto czy_pierwsza = 0;
    for(auto i=2; i < sqrt(a); i++)
    {
        if(a%i == 0) czy_pierwsza++;
    }
	
    if((czy_pierwsza == 0) && (a != 1))
    {
        auto suma = 0;
        for(auto i=2; i <=a; i++)
        {
			auto czy_pierwsza = 0;
			
           for(auto j=2; j < i; j++)
           {
                 if(i%j == 0) czy_pierwsza++; 
           }
           
           if((czy_pierwsza == 0) && (i != 1))	suma += i; 
        }
        std::cout << suma << "\n"; 
    }
    else  std::cout << "Liczba " << a << " nie jest liczba pierwsza.\n";   
    
    return 0;
}
