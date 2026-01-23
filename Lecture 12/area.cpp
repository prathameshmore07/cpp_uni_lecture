#include <iostream>
using namespace std;

float areaRectangle(float l, float b);
float areaCircle(float r);
float areaTriangle(float b, float h);
float areaSquare(float s);

int main()
{
    int choice;
    float l, b, r, h, s;

    cout << "----- Area Calculator -----" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Square" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area of Rectangle = " << areaRectangle(l, b);
        break;

    case 2:
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of Circle = " << areaCircle(r);
        break;

    case 3:
        cout << "Enter base and height: ";
        cin >> b >> h;
        cout << "Area of Triangle = " << areaTriangle(b, h);
        break;

    case 4:
        cout << "Enter side: ";
        cin >> s;
        cout << "Area of Square = " << areaSquare(s);
        break;

    default:
        cout << "Invalid choice!";
    }
    cout << endl;

    return 0;
}

float areaRectangle(float l, float b)
{
    return l * b;
}

float areaCircle(float r)
{
    return 3.14 * r * r;
}

float areaTriangle(float b, float h)
{
    return 0.5 * b * h;
}

float areaSquare(float s)
{
    return s * s;
}