#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int w)
    {
        length = l;
        breadth = w;
    }

    int calculateArea()
    {
        return length * breadth;
    }

    int getArea()
    {
        return calculateArea();
    }
};

int main()
{
    int length, breadth;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the breadth: ";
    cin >> breadth;

    Rectangle rect1(length, breadth);

    cout << "Area of the rectangle: " << rect1.getArea() << endl;

    return 0;
}
