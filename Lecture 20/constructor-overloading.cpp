#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Default Constructor\n";
    }

    Demo(int a)
    {
        cout << "Parameterized Constructor: " << a;
    }
};

int main()
{
    Demo d1;
    Demo d2(10);
    return 0;
}