#include <iostream>
#include <string>
int a;

auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty())
	{
		std::cout << prompt;
	}
	std::string value;
	std::getline(std::cin, value);
	return std::stoi(value);
}

int main()
{
	std::cout << "Pamietaj liczba pierwsza jest wieksza od 1!";
	auto a = ask_user_for_integer("Podaj liczbe: ");
	
	if(a>1)
	{
	
		for(int i=2; i<=a;i++)
		{	
			int x = a % i;
			if(x!=0)
			{
				
			}
			else
			{
				break;
			}
		}
			
		
	
		if(x==0)
		{
			std::cout << "To jest liczba pierwsza";
		}
		else
		{
			std::cout << "To nie jest liczba pierwsza";
		}
	
	}
	
	
	

	return 0;
}
