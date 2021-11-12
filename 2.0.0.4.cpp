#include <iostream>
#include <string>

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

int a;
int x=0;
int c;

int main()
{
	
	auto a = ask_user_for_integer("Podaj liczbe: ");
	
	
	if(a>1 && a!=0)
	{
		for(int i=2; i<a;i++)
		{	
			c=a%i;
			
			if(c==0)
			{
				std::cout << "to nie jest liczba pierwsza";
				break;	
			}
			else if(c!=0)
			{
				x=x + 1;
			}
		}
		
		if(x==a-2)
		{
			std::cout << "to jest liczba pierwsza";
		}
	
		
	
		
	}
	
	

	return 0;
}
