////multiple level with data members

#include <iostream>
using namespace std;

class Device
{
protected:
    void powerOn()
    {
        cout << "Device powered on" << endl;
    }
};

class Phone : protected Device
{
private:
    void call()
    {
        cout << "Calling..." << endl;
    }

public:
    void usePhone()
    {
        powerOn(); 
        call();
    }
};

int main()
{
    Phone p;
    p.usePhone();
    return 0;
}
