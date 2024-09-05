#include <iostream>
using namespace std;

typedef struct employee
{
    int ID;
    char favchar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    // union money m1;
    // m1.rice = 34;
    // cout << m1.rice << endl;

    // ep piyush;
    // piyush.ID = 2;
    // piyush.favchar = 'n';
    // piyush.salary = 1250000;
    // cout << piyush.ID << endl;
    // cout << piyush.favchar << endl;
    // cout << piyush.salary << endl;
    return 0;
}