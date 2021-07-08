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

class NewBox
{
public:
    double getVolume(void)
    {
        return length * width * height;
    }
    void setLength(double len)
    {
        length = len;
    }
    void setWidth(double wid)
    {
        width = wid;
    }
    void setHeight(double hei)
    {
        height = hei;
    }

    // Overloading the + operator to add the ability to add boxes together
    NewBox operator+(const NewBox& b)
    {
        NewBox box;
        box.length = this->length + b.length;
        box.width = this->width + b.length;
        box.height = this->height + b.height;
        return box;
    }
private:
    double length;
    double width;
    double height;
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


    NewBox NewBox1;
    NewBox NewBox2;
    NewBox NewBox3;
    
    NewBox1.setLength(5.0);
    NewBox1.setWidth(2.4);
    NewBox1.setHeight(4.0);

    NewBox2.setLength(2.0);
    NewBox2.setWidth(5.3);
    NewBox2.setHeight(1.2);

    volume = NewBox1.getVolume();
    std::cout << "newbox1 vol: " << volume << std::endl;
    
    volume = NewBox2.getVolume();
    std::cout << "newbox2 vol: " << volume << std::endl;

    NewBox3 = NewBox1 + NewBox2;

    volume = NewBox3.getVolume();
    std::cout << "newbox3 vol: " << volume << std::endl;

    return 0;
}