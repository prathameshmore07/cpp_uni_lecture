#include <iostream>
using namespace std;

int main()
{
    int arr[6];

    cout << "Enter 6 integers:\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << "Even numbers:\n";
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << "\n";
    }

    cout << "Odd numbers:\n";
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
            cout << arr[i] << "\n";
    }

    return 0;
}
