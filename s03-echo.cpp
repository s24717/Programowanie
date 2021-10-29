#include <iostream>
#include <string>
int a;
std::string napis, napis1;
auto main(int argc, char* argv[]) -> int
{
	
	
napis=argv[1];
napis1=argv[2];
if(napis=="-n")
{
	for(int i=2; i<=argc;i++)
	{
		std::cout << argv[i];
	}
}
else if(napis=="-r")
{
	for(int i=argc-1; i>=2;i--)
	{
		std::cout << argv[i];
	}
}
else if(napis=="-l")
{
	for(int i=2; i<=argc;i++)
	{
		std::cout << argv[i] << "\n";
	}
}
else if(napis=="-r" and napis1=="-l")
{
	for(int i=argc-1; i>=3;i--)
	{
		std::cout << argv[i] << "\n";
	}
}
else if(napis=="-r" and napis1=="-n")
{
	for(int i=argc-1; i>=3;i--)
	{
		std::cout << argv[i];
	}
}
