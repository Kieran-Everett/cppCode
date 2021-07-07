#include <iostream>

using namespace std;

void withNumbers()
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
        //cout << someArray + i << endl; // outputs the pointer for each location of the array
        //cout << someArray + i << " = " << *(someArray + i) << endl; // gets the value through the pointer

        // this example increments the pointer itself
        cout << pLocation0 << " = " << *pLocation0 << endl;
        pLocation0++;
    }
}

void withStrings()
{
    // now with a string
    char someString[] = "Hello!";

    char* pSomeString = someString;

    cout << "pSomeString = " << pSomeString << endl;

    char* pLocation3 = &someString[3];
    char* pLocation0 = &someString[0];

    cout << "pLocation3 = " << (int)pLocation3 << endl;
    cout << "pLocation0 = " << (int)pLocation0 << endl;
    cout << "difference = " << pLocation3 - pLocation0 << endl;

    cout << "pLocation3 = " << pLocation3 << endl;
    cout << "pLocation0 = " << pLocation0 << endl;
}

int main()
{
    withNumbers();
    withStrings();
}