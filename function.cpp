#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void g()
{
    cout << "hello, Good Night" << endl;
}
int main()
{
    int num1, num2;
    cout << "Enter the num1 : " << endl;
    cin >> num1;
    cout << "Enter the num2 : " << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
    return 0;
}