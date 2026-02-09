#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    // dynamically allocate array
    int *arr = new int[n];

    // input elements
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // display elements
    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // free memory
    delete[] arr;

    return 0;
}
