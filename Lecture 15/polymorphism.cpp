#include <iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }


    float add(float a, float b)
    {
        return a + b;
    }

    float add(float a, float b,float c)
    {
        return a + b + c;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }


    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;


    cout << "Integer addition: " << c.add(10, 20) << endl;
    cout << "Float addition: " << c.add(5.5f, 4.5f) << endl;
    cout << "Float addition of three numbers: " << c.add(5.5f, 4.5f,5.5f) << endl;
    return 0;
}