#include <iostream>
using namespace std;

/* Function to check prime */
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

/* Function to reverse a number */
int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}

int main()
{
    int limit;

    cout << "Enter limit: ";
    cin >> limit;

    cout << "Reverse of prime numbers are:\n";

    for (int i = 2; i <= limit; i++)
    {
        if (isPrime(i))
        {
            cout << i << " -> " << reverseNumber(i) << endl;
        }
    }

    return 0;
}