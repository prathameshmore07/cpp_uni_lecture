#include<iostream>
using namespace std;

int main(){
    int x=25;
    int *p =&x;

    cout<<"value of x: " <<x<<endl;
    cout<<"address of x: "<<&x<<endl;
    cout<<"value stored in p: "<<p<<endl;
    cout << "value stored in p: " << *p << endl;

    return 0;
}