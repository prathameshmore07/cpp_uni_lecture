#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int count = 1;

    int n1 = 0, n2 = 1;
    cout << "Fibonacci Series: ";

    while (count <= n)
    {
        cout << n1 << " ";
        int nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
        count++;
    }
    cout << endl;

    return 0;
}
