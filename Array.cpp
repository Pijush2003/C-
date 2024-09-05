#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 78, 99};
    cout << "These are the marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    marks[2] = 79;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    int mathmark[4];
    mathmark[0] = 567;
    mathmark[1] = 678;
    mathmark[2] = 850;
    mathmark[3] = 789;
    // cout << "These are mathmarks" << endl;
    // cout << mathmark[0] << endl;
    // cout << mathmark[1] << endl;
    // cout << mathmark[2] << endl;
    // cout << mathmark[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of mathmark " << i << " is " << mathmark[i] << endl;
    // }

    // int j = 0;
    // while (j < 4)
    // {
    //     cout << mathmark[j] << endl;
    //     j++;
    // }

    // int k = 0;
    // do
    // {
    //     cout << marks[k] << endl;
    //     k++;
    // } while (k < 4);

    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    cout << "The value of marks[2] is " << *(p + 2) << endl;
    cout << "The value of marks[3] is " << *(p + 3) << endl;

    return 0;
}