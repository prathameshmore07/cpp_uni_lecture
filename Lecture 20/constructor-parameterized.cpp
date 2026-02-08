#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1(1, "Ravi");

    s1.display();
    cout << endl;

    return 0;
}
