#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// this will not swap the value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using refence variable
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 6;
    // cout << "The sum of a&b  : " << sum(a, b);
    // cout << "The value of a is " << a << endl
    //      << "the value of b is " << b << endl;
    // swap(a, b);
    // cout << "The value of a is " << a << endl
    //      << "the value of b is " << b << endl;

    // swapPointer(&a, &b);
    // cout
    //     << "The value of a is " << a << endl
    //     << "the value of b is " << b << endl;

    swapReferenceVar(a, b);
    cout << "The value of a is " << a << endl
         << "the value of b is " << b << endl;

    return 0;
}