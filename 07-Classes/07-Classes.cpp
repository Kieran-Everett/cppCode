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

class Box
{
    public:
        double lenght;
        double width;
        double height;
};

// Base Class
class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }

    protected:
        int width;
        int height;
};

class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

// Derived Class
class Rectangle : public Shape, public PaintCost
{
    public:
        int getArea()
        {
            return (width * height);
        }
};

int main()
{
    count = 5;
    write_extern();

    for (int i = 0; i < 10; i++)
    {
        counter();
    }


    double volume = 0.0;

    Box Box1;
    Box Box2;

    Box1.height = 4.2;
    Box1.width = 6.9;
    Box1.lenght = 7.0;

    Box2.height = 2.0;
    Box2.width = 52.0;
    Box2.lenght = 23.0;

    volume = Box1.height * Box1.lenght * Box1.width;
    std::cout << "Box 1 volume: " << volume << std::endl;

    volume = Box2.height * Box2.lenght * Box2.width;
    std::cout << "Box 2 volume: " << volume << std::endl;


    Rectangle Rect;
    Rect.setWidth(5);
    Rect.setHeight(3);

    int area = Rect.getArea();

    std::cout << "Area of Rect: " << Rect.getArea() << std::endl;
    std::cout << "Cost of paint: " << Rect.getCost(area) << std::endl;

    return 0;
}