#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// int main()
// {
//     int x = 10, y = 20;
//     swap(&x, &y);
//     cout << "X = " << x << " Y = " << y;
//     return 0;
// }
int main()
{
    int x = 100;
    int *p = &x;
    int **pp = &p;
    cout << x << endl;
    cout << *p << endl;
    cout << **pp << endl;
    return 0;
}

