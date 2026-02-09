#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    int maths, english, hindi;
    int total;
    float percentage;

public:
    // Constructor
    Student(int r, int m, int e, int h)
    {
        roll = r;
        maths = m;
        english = e;
        hindi = h;

        total = maths + english + hindi;
        percentage = total / 3.0;

        cout << "Student details saved.\n";
    }

    // Destructor
    ~Student()
    {
        cout << "Student details destroyed.\n";
    }

    // Display function
    void display()
    {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Maths: " << maths << endl;
        cout << "English: " << english << endl;
        cout << "Hindi: " << hindi << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    int roll, m, e, h;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Maths marks: ";
    cin >> m;

    cout << "Enter English marks: ";
    cin >> e;

    cout << "Enter Hindi marks: ";
    cin >> h;

    Student s1(roll, m, e, h);
    s1.display();

    return 0;
}
