#include <iostream>

class printData
{
public:
    void print(int i)
    {
        std::cout << "printing int: " << i << std::endl;
    }
    void print(double f)
    {
        std::cout << "printing double: " << f << std::endl;
    }
    void print(char* c)
    {
        std::cout << "printing character: " << c << std::endl;
    }
};

int main()
{
    printData pd;

    pd.print(5);

    pd.print(69.420);

    char testStr[5] = "haah";
    pd.print(testStr);
}