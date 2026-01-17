#include <iostream>
using namespace std;

class Book
{
public:
    string name;
    float price;

    void display()
    {
        cout << "Book Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1;
    b1.name = "50 Shades of Grey";
    b1.price = 499.50;

    b1.display();
    return 0;
}
