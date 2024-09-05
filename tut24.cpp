#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;

        count++;
    }
    void getdata(void)
    {
        cout << "The id of the Employee is " << id << " nad this is employee no " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count;

int main()
{
    Employee harry, rohan, suhas;
    harry.setdata();
    harry.getdata();
    Employee::getCount();

    rohan.setdata();
    rohan.getdata();
    Employee::getCount();

    suhas.setdata();
    suhas.getdata();
    Employee::getCount();

    return 0;
}