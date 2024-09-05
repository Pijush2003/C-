#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 144;
        cout << "Enter the id of the employee " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of the Employee is " << id << endl;
    }
};

int main()
{
    Employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}