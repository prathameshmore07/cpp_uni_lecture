#include <iostream>
using namespace std;

class Number
{
public:
    int x;

    Number(int a)
    {
        x = a;
    }

    Number operator+(Number obj)
    {
        return Number(x + obj.x);
    }

    Number operator-(Number obj)
    {
        return Number(x - obj.x);
    }
};

int main()
{
    Number n1(50);
    Number n2(20);

    Number sum = n1 + n2;
    Number diff = n1 - n2;

    cout << "Addition Result: " << sum.x << endl;
    cout << "Subtraction Result: " << diff.x << endl;

    return 0;
}
