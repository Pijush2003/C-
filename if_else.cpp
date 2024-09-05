#include <iostream>

using namespace std;

int main()
{
    // cout << "this tutorial 9" << endl;

    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "You are a kid" << endl;
    }
    else if (age == 18)
    {
        cout << "YOu are an adult you can vote" << endl;
    }
    else
    {
        cout << "you can marry" << endl;
    }

    return 0;
}