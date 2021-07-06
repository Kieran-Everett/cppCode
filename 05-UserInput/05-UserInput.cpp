#include <iostream>
#include <string>

int main()
{
    int x;
    std::cout << "Number: ";
    std::cin >> x;
    std::cout << "That number is " << x << std::endl;
    std::string e = "hey"; // what the frick is this
    std::cout << e << std::endl;

    //                  i   dont think i    want ot do   C++ any more


    // This only works for when you have a single word
    std::cout << "\nString: ";
    std::cin >> e;
    std::cout << "Your string was " << e << std::endl;
}