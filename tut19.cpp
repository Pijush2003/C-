#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using 3 arguments" << endl;
    return a + b + c;
}
int main()
{
    cout << "the sum of 4 & 6 " << sum(4, 6) << endl;
    cout << "the sum of 4,8,9 is " << sum(4, 8, 9) << endl;
    return 0;
}