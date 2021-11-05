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

int main()
{

	auto a = ask_user_for_integer("Podaj liczbe: ");
	auto b = ask_user_for_integer("Podaj liczbe: ");
	auto c = ask_user_for_integer("Podaj liczbe: ");
	if(a < b && c!=0)
	{	if(c>0)
		{
			for(int i=a; i<b; i=i+c)
			{
				std::cout << i << "\n";
			}
		}
		else if(c<0)
		{
			for(int i=a; i<b; i=i-c)
			{
				std::cout << i << "\n";
			}
		}
	}
	else
	{
		std::cout << "a musi byc mniejsze od b oraz c rozne od 0" << "\n";
	}

	return 0;
}
