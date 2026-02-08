#include <iostream>
using namespace std;

class Sample
{
public:
    int x;

    // Parameterized Constructor
    Sample(int a)
    {
        x = a;
    }

    // Copy Constructor
    Sample(Sample &obj)
    {
        x = obj.x;
    }

    void show()
    {
        cout << "Value of x: " << x;
    }
};

int main()
{
    Sample s1(10); // calls parameterized constructor
    Sample s2(s1); // calls copy constructor

    s2.show();
    return 0;
}