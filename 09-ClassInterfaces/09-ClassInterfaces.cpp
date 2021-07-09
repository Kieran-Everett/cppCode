#include <iostream>

class Shape {
public:
    // A virtual function providing an interface with 'higher level' classes
    virtual int getArea() = 0;
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
protected:
    int width;
    int height;
};

// Derriving from Shape
class Rectangle : public Shape {
public:
    // This method is called through the virtual function in the inherrited Shape class
    int getArea() {
        return (width * height);
    }
};

class Triangle : public Shape {
public:
    // This method is also called through the virtual function
    int getArea() {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(2);

    std::cout << "total rectangle area: " << Rect.getArea() << std::endl;

    // uuh these are bad numbers to use as examples but it works soooo.... (area is 10.5 but uses an int as the data type)
    Tri.setWidth(3);
    Tri.setHeight(7);

    std::cout << "total triangle area: " << Tri.getArea() << std::endl;

    return 0;
}