#include <iostream>
using namespace std;

class Sports
{
public:
    int score = 20;
    string sportName = "footbawl";
};

class Academics
{
public:
    int marks = 80;
};

class Student : public Sports, public Academics
{
public:
    void total()
    {
        int totalMarks = score + marks;
        float percentage = (totalMarks / 200.0) * 100;

        cout << "Sport Name: " << sportName << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Total = " << totalMarks << endl;
        cout << "Percentage = " << percentage << "%" << endl;
    }
};

int main()
{
    Student s;
    s.total();
    return 0;
}
