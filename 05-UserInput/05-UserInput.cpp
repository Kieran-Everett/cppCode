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

    // trying to fix input buffer
    std::cin.clear();
    //std::cin.ignore(100, '\n'); // Hardcodes the size which works but not for larger amounts of text
    std::cin.ignore(sizeof(e), '\n'); // Change the "e" variable to be whatever the last cin variable was and it will clear the buffer to that size

    // This allows multiple words as input
    std::string f;
    std::cout << "\n\nWords: ";
    std::getline(std::cin, f);
    std::cout << "Your words were " << f << std::endl;
}