#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("output.txt");
    fout<<"Welcome to cpp file handling"<<endl;
    fout.close();
    cout<<"Data written to file";
    return 0;

}