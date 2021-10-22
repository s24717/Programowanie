#include <iostream>

auto main(int argc, char* argv[]) -> int
{
	
	
	for(int i=1; i<=argv[1]; i++)
	{
		if(i%3==0 && i%5==0)
		{
			std::cout << i << " FizzBuzz" << "\n";
		}
		else if(i%5==0)
		{
			std::cout << i << " Buzz" << "\n";
		}
		else if(i%3==0)
		{
			std::cout << i << " Fizz" << "\n";
		}
		else
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}
	
