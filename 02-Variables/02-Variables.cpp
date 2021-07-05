#include <iostream>

void part_1()
{
    int x; // define the variable with a data type


    // if you try to use an uninitialized variable then you get an error and the program crashes
    //std::cout << x;


    x = 10; // setting the variable to be something

    std::cout << x << std::endl; // outputting it to the console


    // you can define multiple variables of the same type on the same line
    int a, b;
    a = 5;
    b = 23;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // to define different types of variables they need to be seperate
    //e.g.
    //int c; double d; // this works but no... dont do this... this is the same as doing multiple lines
}

void part_2()
{
    // there are different ways to define a variable
    
    int a; // no initializer

    // Copy Initialization
    int b = 1; // initializer after definition
    // this copies the value on the right to the variable on the left
    // this can be efficient for ints and basic data types but not for more complex ones

    // Direct Initialization
    int c(3); // initializer in brackets
    // this directly initializes the variable instead of copying
    // more efficient for more complicated types than copy initialization

    // List Initialization
    int d{6}; // initializer in curly brackets
    // this is initializing the variable like a list and is the best practice for initializing variables and can be combined with Copy and Direct initialization
    // this is because it stops narrowing which is where it will create an error or warning if it is a different data type than what it can safely hold
    //e.g.
    //int e{4.5};
    // if you think about this a bit more its like you are defining a method but with a number instead, its a really interesting way to do it and makes total sense
}

int main()
{
    part_1();
    part_2();

    return 0;
}