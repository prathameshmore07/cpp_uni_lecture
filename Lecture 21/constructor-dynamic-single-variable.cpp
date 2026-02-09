#include <iostream>
using namespace std;

int main()
{
    int *ptr; // pointer declaration

    // dynamically allocate memory for one int
    ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "Entered number = " << *ptr << endl;

    // free allocated memory
    delete ptr;

    return 0;
}
