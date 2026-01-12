// Armstrong number woh number hota hai jisme uske har digit ka cube (³) ka sum, us number ke barabar hota hai.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, temp, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, 3);
        temp = temp / 10;
    }

    if (sum == num)
    {
        cout << num << " is an armstrong number";
    }
    else
    {
        cout << num << " is not an armstrong number";
    }

    return 0;
}
