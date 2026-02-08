#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor called";
    }
};

int main()
{
    Student s;
    return 0;
}