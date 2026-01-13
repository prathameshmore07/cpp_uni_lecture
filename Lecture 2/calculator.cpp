#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double a, b;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Power\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    switch (choice)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << pow(a, b);
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}