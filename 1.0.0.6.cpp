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

	if(a == b)
	{
		std::cout << a << "=" << b << "\n";
	}
	else if(a > b)
	{
		std::cout << a << ">" << b << "\n";	
	}
	else if(a < b)
	{
		std::cout << a << "<" << b << "\n";	
	}	

	return 0;
}
