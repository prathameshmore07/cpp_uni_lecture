#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 5; x++)
    {
        for (int z = 5; z > x; z--)
        {cout << " ";}

        for (int z = 1; z <= (2 * x - 1); z++)
        {cout << "*";}

        cout << endl;
    }
    return 0;
}
