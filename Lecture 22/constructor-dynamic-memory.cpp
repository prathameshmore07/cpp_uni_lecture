#include <iostream>
using namespace std;

class Sample
{
private:
    int *data; // pointer for dynamic memory

public:
    // Constructor: allocates memory
    Sample(int val) // receive value, not pointer
    {
        data = new int; // dynamic allocation
        *data = val;    // store value

        cout << "Memory allocated and value set to " << *data << endl;
    }

    // Function to display value
    void display()
    {
        cout << "Value stored in dynamic memory: " << *data << endl;
    }

    // Destructor: frees memory
    ~Sample()
    {
        delete data; // free memory
        cout << "Memory deallocated" << endl;
    }
};

int main()
{
    Sample obj(50); // constructor called

    obj.display();

    return 0;
}
