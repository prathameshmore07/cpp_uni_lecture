#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num, temp, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp = temp / 10;
    }

    if (sum == num) {
        cout << num << " is a strong Number";
    } else {
        cout << num << " is not a strong Number";
    }

    return 0;
}