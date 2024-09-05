#include <iostream>
using namespace std;
int product(int a, int b)
{
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}
int main()
{
    int a, b;
    // cout << "The value of a& b " << endl;
    // cin >> a >> b;
    // cout << "the sum of a & b " << product(a, b);

    int money = 100000;
    cout << "if you have " << money << " Rs in your bank " << moneyReceived(money) << " Rs after 1 year" << endl;

    cout << "For VIP : if you have " << money << " Rs in your bank " << moneyReceived(money, 1.2) << " Rs after 1 year" << endl;
    return 0;
}