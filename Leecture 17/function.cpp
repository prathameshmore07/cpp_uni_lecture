// true run time polymorphism

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "This is a base class display" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "This is a derived class display" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;

    b->display();
    return 0;
}