#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

// base class
class LibraryItem
{
public:
    int id; // har library item ka id
};

// book class jo libraryitem se inherit karta hai
class Book : public LibraryItem
{
public:
    string title, author;
    int issued; // 0 = available, 1 = issued
};

// member class
class Member
{
public:
    int memberId;
    string name;
};

// global variables
string fileName = "books.txt";

Member members[100]; // members ko store karne ke liye array
int memberCount = 0; // total members count

// new book add karne ka function
void addBook()
{
    Book b;
    ofstream file(fileName, ios::app);

    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, b.title);

    cout << "Enter Author: ";
    getline(cin, b.author);

    b.issued = 0; // by default book available hogi

    file << b.id << "|" << b.title << "|" << b.author << "|" << b.issued << endl;
    file.close();

    cout << "Book Added!\n";
}

// saari books display karne ka function
void displayBooks()
{
    ifstream file(fileName);
    string line;

    cout << "\n--- book list ---\n";

    while (getline(file, line))
    {
        if (line.empty())
            continue; // empty line skip karega

        Book b;
        string temp;
        stringstream ss(line);

        getline(ss, temp, '|');
        if (temp.empty())
            continue; // invalid data skip
        b.id = stoi(temp);

        getline(ss, b.title, '|');
        getline(ss, b.author, '|');

        getline(ss, temp);
        if (temp.empty())
            continue;
        b.issued = stoi(temp);

        cout << "\nID: " << b.id;
        cout << "\nTitle: " << b.title;
        cout << "\nAuthor: " << b.author;
        cout << "\nStatus: " << (b.issued ? "Issued" : "Available");
        cout << "\n----------------";
    }

    file.close();
}

// book id se search karne ka function
void searchBook()
{
    ifstream file(fileName);
    string line;
    int searchId;
    bool found = false;

    cout << "Enter Book ID to Search: ";
    cin >> searchId;

    while (getline(file, line))
    {
        if (line.empty())
            continue; // empty line skip

        Book b;
        string temp;
        stringstream ss(line);

        getline(ss, temp, '|');
        if (temp.empty())
            continue;
        b.id = stoi(temp);

        getline(ss, b.title, '|');
        getline(ss, b.author, '|');

        getline(ss, temp);
        if (temp.empty())
            continue;
        b.issued = stoi(temp);

        if (b.id == searchId)
        {
            cout << "\nBook Found!";
            cout << "\nTitle: " << b.title;
            cout << "\nAuthor: " << b.author;
            cout << "\nStatus: " << (b.issued ? "Issued" : "Available");
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nBook Not Found!\n";

    file.close();
}

// book issue ya return karne ka function
void updateStatus(int newStatus)
{
    ifstream file(fileName);
    ofstream temp("temp.txt");
    string line;
    int searchId;
    bool found = false;

    cout << "Enter Book ID: ";
    cin >> searchId;

    while (getline(file, line))
    {
        if (line.empty())
            continue; // empty line skip

        Book b;
        string tempStr;
        stringstream ss(line);

        getline(ss, tempStr, '|');
        if (tempStr.empty())
            continue;
        b.id = stoi(tempStr);

        getline(ss, b.title, '|');
        getline(ss, b.author, '|');

        getline(ss, tempStr);
        if (tempStr.empty())
            continue;
        b.issued = stoi(tempStr);

        if (b.id == searchId)
        {
            b.issued = newStatus; // status update
            found = true;
        }

        temp << b.id << "|" << b.title << "|" << b.author << "|" << b.issued << endl;
    }

    file.close();
    temp.close();

    remove("books.txt");
    rename("temp.txt", "books.txt");

    cout << (found ? "Status Updated!\n" : "Book Not Found!\n");
}

// array use karke member add karna
void addMember()
{
    if (memberCount >= 100)
    {
        cout << "Member limit reached!\n";
        return;
    }

    cout << "Enter Member ID: ";
    cin >> members[memberCount].memberId;
    cin.ignore();

    cout << "Enter Member Name: ";
    getline(cin, members[memberCount].name);

    memberCount++;
    cout << "Member Added Successfully!\n";
}

// saare members display karna
void displayMembers()
{
    cout << "\n--- member list ---\n";

    for (int i = 0; i < memberCount; i++)
    {
        cout << "\nID: " << members[i].memberId;
        cout << "\nName: " << members[i].name;
        cout << "\n------------------";
    }
}

// main function jahan se program start hota hai
int main()
{
    int choice;

    do
    {
        cout << "\n=== library system ===";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Add Member";
        cout << "\n7. Display Members";
        cout << "\n8. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (choice == 1)
            addBook();
        else if (choice == 2)
            displayBooks();
        else if (choice == 3)
            searchBook();
        else if (choice == 4)
            updateStatus(1);
        else if (choice == 5)
            updateStatus(0);
        else if (choice == 6)
            addMember();
        else if (choice == 7)
            displayMembers();

    } while (choice != 8);

    return 0;
}
