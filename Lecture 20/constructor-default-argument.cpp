#include <iostream>
using namespace std;

class Test
{
public:
    Test(int x = 5)
    {
        cout << x << endl;
    }
};

int main()
{
    Test t1;
    Test t2(20);
    return 0;
}