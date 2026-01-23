#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle started" << endl;
    }
};

// Derived class 1
class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is driving" << endl;
    }
};

// Derived class 2
class ElectricCar : public Car
{
public:
    void charge()
    {
        cout << "Electric car is charging" << endl;
    }
};

int main()
{
    ElectricCar e;
    e.start();
    e.drive();
    e.charge();
    return 0;
}