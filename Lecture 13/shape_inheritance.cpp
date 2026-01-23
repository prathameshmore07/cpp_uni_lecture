#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    void draw()
    {
        cout << "Drawing shape" << endl;
    }
};

// Derived class 1
class Rectangle : public Shape
{
public:
    float length, breadth;

    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

// Derived class 2
class Circle : public Shape
{
public:
    float radius;

    void area()
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Rectangle r;
    r.length = 5;
    r.breadth = 4;
    r.draw();
    r.area();

    Circle c;
    c.radius = 3;
    c.draw();
    c.area();

    return 0;
}