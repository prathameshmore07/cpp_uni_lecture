#include<iostream>
using namespace std;

int main(){
    int arr[2]={10,20};
    int *p =arr;
    cout<<*p<<endl;
    cout << *(p+1) << endl;

    return 0;
}