#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    string line;
    fin.open("output.txt");
    getline(fin,line);

    cout << line << endl;
    fin.close();
    return 0;
}