#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;
    cout << "Addition operator " << a + b << endl;
    cout << "substraction operator " << a - b << endl;
    cout << "multiplication operator " << a * b << endl;
    cout << "division operator  " << a / b << endl;
    cout << "modulo operator " << b % a << endl;
    cout << "increment operator " << a++ << endl;
    cout << "decrement operator " << a-- << endl;
    cout << a << endl;
    cout << "increment operaror " << ++a << endl;
    cout << "decrement operator " << --a << endl;

    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << endl;
    cout << ((a == b) && (a >= b)) << endl;
    cout << ((a == b) || (a <= b)) << endl;

    return 0;
}