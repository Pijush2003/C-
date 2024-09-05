#include <iostream>
using namespace std;
int glo = 6; // ## global variable
void summ()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 76;
    glo = 167; // ##local variable       $# the precedance of local variable is greater than global variable in cpp
    int a = 4, b = 10;
    // int sum = a + b;
    float pi = 3.14;
    char c = 'f';
    summ();
    cout << glo;
    // cout << "the value of pi: " << pi;
    // cout << "\nThis is tutorial for datatypes in c++ \n"
    //      << sum;
    // cout << "\n the value of c: " << c;
    return 0;
}