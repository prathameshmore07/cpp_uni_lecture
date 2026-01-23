#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    void getStudent()
    {
        cout << "Enter Roll No: "; 
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Marks : public Student
{
public:
    int m1, m2, m3, m4;

    void getMarks()
    {
        cout << "Enter Marks 1: ";
        cin >> m1;
        cout << "Enter Marks 2: ";
        cin >> m2;
        cout << "Enter Marks 3: ";
        cin >> m3;
        cout << "Enter Marks 4: ";
        cin >> m4;
    }
};

class Result : public Marks
{
public:
    void display()
    {
        int total = m1 + m2 + m3 + m4;
        float percentage = total / 4.0;

        cout << "\n--- Student Result ---" << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks 1: " << m1 << endl;
        cout << "Marks 2: " << m2 << endl;
        cout << "Marks 3: " << m3 << endl;
        cout << "Marks 4: " << m4 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.display();

    return 0;
}
