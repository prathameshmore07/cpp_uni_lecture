#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    string s3;

    // Concatenation using +
    s3 = s1 + " " + s2;
    cout << "Concatenated string: " << s3 << endl;

    // Append using +=
    s1 += " ";
    s1 += s2;
    cout << "After += operator: " << s1 << endl;

    return 0;
}