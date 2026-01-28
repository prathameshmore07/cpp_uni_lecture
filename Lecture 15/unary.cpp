// Operator Overloading
#include <iostream>
using namespace std;
class Counter
{
public:
    int count;
    Counter(int c)
    {
        count = c;
    }
    void operator++()
    {
        count = count + 1;
    }
};

int main()
{
    Counter c1(10);
    ++c1;
    cout << "Count: " << c1.count << endl;
    return 0;
}