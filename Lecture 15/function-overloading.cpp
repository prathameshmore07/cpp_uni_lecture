// function overloading using character
#include <iostream>
using namespace std;

class Print
{
public:
    void print(char c)
    {
        cout << "Character: " << c << endl;
    }

    void print(string s)
    {
        cout << "String: " << s << endl;
    }
};

int main()
{
    Print p;

    p.print('A');
    p.print("Hello");
    return 0;
}