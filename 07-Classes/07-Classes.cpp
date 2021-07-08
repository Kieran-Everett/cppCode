#include <iostream>

int count;
extern void write_extern();

// This is a static Storage Class and uses a static variable to preserve it between function calls
void counter(void)
{
    static int i = 0;
    i++;
    std::cout << "count is at: " << i << std::endl;
}

int main()
{
    count = 5;
    write_extern();

    for (int i = 0; i < 10; i++)
    {
        counter();
    }

    return 0;
}