#include <iostream>
using namespace std;

int main()
{
    cout << "Prime numbers between 1 and 100:\n";

    for (int n = 2; n <= 100; n++)
    {
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            cout << n << " ";
    }
    cout<<endl;
    return 0;
}
