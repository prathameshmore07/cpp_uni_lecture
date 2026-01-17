#include <iostream>
using namespace std;

class bankAcc
{
private:
    int balance; 

public:
    void setBalance(int b)
    {
        balance = b;
    }

    void viewBalance()
    {
        cout << "Bank Balance: " << balance << endl;
    }
};

int main()
{
    bankAcc b1;
    b1.setBalance(5000);
    b1.viewBalance();

    return 0;
}
