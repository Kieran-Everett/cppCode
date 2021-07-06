#include <iostream>

int main()
{
    short int i = 1;
    short unsigned int j = 1;
    
    while (true)
    {
        i++;
        j++;
        std::cout << "\ni: " << i;
        std::cout << "\nj: " << j;
        if (i < 0)
        {
            break;
        }
    }
}