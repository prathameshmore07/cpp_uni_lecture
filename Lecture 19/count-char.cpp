#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    char ch;
    int count = 0;

    if (!file)
    {
        cout << "File not found!" << endl;
        return 1;
    }

    while (file.get(ch))
    {
        count++;
    }

    file.close();

    cout << "Characters: " << count << endl;
    return 0;
}
