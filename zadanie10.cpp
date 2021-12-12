#include <iostream>
#include <string>



void box_print(std::string *tab)
{   
    int x = 0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(tab[i].length() < tab[j].length())
            {
                x = tab[j].length();
            }
        }
    }

    int k=0;
    
    for(int i=0;i<7;i++)
    {   
        if(i==0 || i==6)
        {
            for(int j=0;j<x+2;j++)
            {
                std::cout << "*";

            }
            std::cout << "\n";
        }
        else if(i<6)
        {   
            for(int j=0;j<x+2;j++)
            {   
                if(j==0 || j==x+1)
                {
                    std::cout << "*";
                }
                else if(tab[k].length() == x)
                {
                    std::cout << tab[k] << "*";
                }
                else if(tab[k].length() < x)
                {   
                    std::cout << tab[k];
                    for(int c=0;c<x-tab[k].length();c++)
                    {
                        std::cout << " ";

                    }
                }
                k=k+1;
                std::cout << "\n";
            }
            
            
        }
    }

}



std::string a;

int main() 
{   
    
    std::string tablica[5];

    for(int i=0;i<5;i++)
    {   
        std::cout << "Podaj Jeszcze " << 5-i << " slowa: ";
        std::cin >> a;
        tablica[i] = a;
    }



    box_print(tablica);


    
	

	return 0;
}
