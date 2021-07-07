#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;

    int* b;
    b = &a;

    int c = *b;
    cout << c << endl;


    int someArray[10];

    int* pLocation6 = &someArray[6];
    int* pLocation0 = &someArray[0];

    cout << "pLocation6 = " << (int)pLocation6 << endl;
    cout << "pLocation0 = " << (int)pLocation0 << endl;
    cout << "difference = " << pLocation6 - pLocation0 << endl;
}