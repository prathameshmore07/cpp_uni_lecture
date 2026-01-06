#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a: ";
    cin>>a;
    cout << "Enter b ";
    cin>>b;
    if (a>b)
    {
        cout << "A is Greater Than B" << endl;
    } else if (b>a){
        cout << "B is Greater Than A" << endl;
    }
    else {
        cout << "A and B are Equal" << endl;
    
    }
}