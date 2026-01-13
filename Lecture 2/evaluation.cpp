#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: ";
    cin >> marks;
    if (marks >=75 && marks <=100){
        cout<<"Grade A";
    }
    else if (marks >=60 && marks <=75){
        cout<<"Grade B";
    }
    else if (marks >=50 && marks <=60){
        cout<<"Grade C";
    }
    else{
        cout<<"Fail";
    }

}