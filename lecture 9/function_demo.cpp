#include <iostream>
using namespace std;

/* -------- USER DEFINED FUNCTIONS -------- */

void greet()
{
    cout << "Hello, Welcome to C++ Functions!" << endl;
}

int add(int a, int b)
{
    return a + b;
}

bool isEven(int n)
{
    return (n % 2 == 0);
}

/* -------- CALL BY VALUE -------- */
void callByValue(int x)
{
    x = 100;
    cout << "Inside Call by Value: " << x << endl;
}

/* -------- CALL BY REFERENCE -------- */
void callByReference(int &x)
{
    x = 200;
}

/* -------- CALL BY POINTER -------- */
void callByPointer(int *x)
{
    *x = 300;
}

int main()
{

    cout << "\n===== USER-DEFINED FUNCTIONS =====\n";
    greet();
    cout << "Addition: " << add(10, 20) << endl;
    cout << "Is 8 Even? " << isEven(8) << endl;

    cout << "\n===== CALL BY VALUE =====\n";
    int a = 10;
    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    cout << "\n===== CALL BY REFERENCE =====\n";
    int b = 20;
    callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    cout << "\n===== CALL BY POINTER =====\n";
    int c = 30;
    callByPointer(&c);
    cout << "After Call by Pointer: " << c << endl;

    return 0;
}