#include<iostream>
using namespace std;

int main() {
   int a, b, sum,mul,sub,div;
   cout<<"Enter First Number: "  ;
   cin>>a;
   cout<<"Enter Second Number: ";
   cin>>b;
   sum = a+b;
   mul=a*b;
   sub=a-b;
   div=a/b;
   cout <<"Sum = " << sum << endl;
   cout <<"Multiplication = " << mul << endl;
   cout << "Substraction = " << sub << endl;
   cout << "Division = " << div << endl;

   return 0;
}