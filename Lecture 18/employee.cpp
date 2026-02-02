#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int ch;
    cout << "1 Add  2 Remove: ";
    cin >> ch;


    if (ch == 1)
    {
        int id, salary;
        string name;

        ofstream f("emp.txt", ios::app);
        cin >> id >> name >> salary;
        f << id << " " << name << " " << salary << endl;
        f.close();

        cout << "Added\n";
    }


    else if (ch == 2)
    {
        int rid, id, salary;
        string name;

        cin >> rid;

        ifstream f("emp.txt");
        ofstream t("temp.txt");

        while (f >> id >> name >> salary)
        {
            if (id != rid)
                t << id << " " << name << " " << salary << endl;
        }

        f.close();
        t.close();

        remove("emp.txt");
        rename("temp.txt", "emp.txt");

        cout << "Removed\n";
    }

    return 0;
}
