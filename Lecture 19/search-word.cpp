#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("data.txt");
    string word, search;
    bool found = false;

    cout << "Enter the word to search: ";
    cin >> search;
    while (file >> word)
    {
        if (word == search)
        {
            found = true;
            break;
        }
    }
    file.close();
    if (found)
    {
        cout << "Word found!" << endl;
    }
    else
    {
        cout << "Word not found!" << endl;
    }
}