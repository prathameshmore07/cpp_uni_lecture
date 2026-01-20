#include <iostream>
#include <cmath>   //for sqrt(), pow()
#include <cstring> //for strlen()
using namespace std;
/* --------------------------------------
     1. USER DEFINED FUNCTIONS
   ---------------------------------------*/
// NON- VOID FUNCTIONS
int add(int a, int b)
{
    return a + b;
}

// VOID FUNCTIONS
void greet()
{
    cout << "Hello! Welcome to C++ programming." << endl;
}

// BOOLEAN RETURN FUNCTION
bool isEven(int n)
{
    return (n % 2 == 0);
}

/*------------------------
  2. CALL BY VALUE
 -----------------------*/
void callByValue(int x)
{
    x = 100;
    cout << "Inside callByValue, modified x: " << x << endl;
}

/*------------------------
  3. CALL BY REFERENCE
 -----------------------*/
void callByReference(int &x)
{
    x = 200;
}
/*------------------
 4. CALL BY POINTER
-------------------*/
void callByPointer(int *x)
{
    *x = 300;
}
/*------------------
  5. Default Arguments Function
-------------------*/
int sumDefault(int a, int b = 5)
{
    return a + b;
}
/*------------------
  6. Inline Function
------------------*/
inline int square(int x)
{
    return x * x;
}
/*------------------
  7. Function Overloading
-------------------*/
int multiply(int a, int b)
{
    return a * b;
}
float multiply(float a, float b)
{
    return a * b;
}
/*------------------
  8. Recursive Function
-------------------*/
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
/*------------------
  Reverse Even Number Function
-------------------*/
int reverseEven(int n)
{
    if (n % 2 != 0) // odd number check
    {
        return -1; // not even
    }

    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}

int main()
{
    cout << "===== Built-in Functions =====" << endl;
    cout << "Square root of 25: " << sqrt(25) << endl;
    cout << "2 raised to the power 3: " << pow(2, 3) << endl;
    cout << "Length of 'Hello string CPLUSPLUS': " << strlen("CPLUSPLUS") << endl;
    cout << "\n===== REVERSE EVEN NUMBER =====\n";
    int num = 2468;

    int result = reverseEven(num);

    if (result == -1)
    {
        cout << "Number is not even, cannot reverse." << endl;
    }
    else
    {
        cout << "Original Number: " << num << endl;
        cout << "Reversed Even Number: " << result << endl;
    }

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