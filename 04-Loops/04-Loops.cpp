#include <iostream>

int main()
{
    int x = { 1 };
    int y = { 1 };

    poggers:

    while (x <= 10)
    {
        std::cout << x << std::endl;
        x++;
    }

    for (x = 1; x <= 20; x++)
    {
        std::cout << x << std::endl;
        if (x != 6)
        {
            continue;
        }
        std::cout << "hi" << std::endl;
    }

    y++;
    if (y == 2)
    {
        goto poggers; // goto is really cool and has some important uses but makes me want to cry sometimes
    }
}