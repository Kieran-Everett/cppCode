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


    int someArray[10] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };

    int* pLocation6 = &someArray[6];
    
    // either of these work because index 0 is the start of the data in RAM of the array
    int* pLocation0 = &someArray[0]; // this one is a bit clearer though
    //int* pLocation0 = someArray;

    cout << "pLocation6 = " << (int)pLocation6 << endl;
    cout << "pLocation0 = " << (int)pLocation0 << endl;
    cout << "difference = " << pLocation6 - pLocation0 << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << someArray[i] << endl; // outputs the array
        cout << someArray + i << endl; // outputs the pointer for each location of the array
        cout << someArray + i << " = " << *(someArray + i) << endl; // gets the value through the pointer
    }
}