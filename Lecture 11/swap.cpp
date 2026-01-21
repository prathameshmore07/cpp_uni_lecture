// //swap using temp

// #include <iostream>
// using namespace std;

// void swap(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x = 5, y = 10;

//     swap(x, y);

//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;

//     return 0;
// }

//swap without using temp

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int x = 5, y = 10;

    swap(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
 