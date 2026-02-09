#include <iostream>
using namespace std;

class Sample
{
private:
    int *p; // pointer for dynamic memory

public:
    // Constructor: allocates memory
    Sample(int value)
    {
        p = new int; // dynamic allocation
        *p = value;  // store value

        cout << "Memory allocated and value set to " << *p << endl;
    }

    // Function to display value
    void display()
    {
        cout << "Value stored in dynamic memory: " << *p << endl;
    }

    // Destructor: frees memory
    ~Sample()
    {
        delete p; // free memory
        cout << "Memory deallocated" << endl;
    }
};

int main()
{
    Sample obj(50); // constructor called

    obj.display();

    return 0;
}
