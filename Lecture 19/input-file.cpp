#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("input.txt");
    string name;

    cout << "Enter your name: ";
    cin >> name;

    fout << name;
    fout.close();

    cout << "Name saved to file\n";

    ifstream fin("input.txt");
    string readName;

    fin >> readName;
    fin.close();

    cout << "Name read from file: " << readName;

    return 0;
}