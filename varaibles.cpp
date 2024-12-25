#include <iostream>

using namespace std;
int glo = 10;

void sum()
{
    int c = 6;
    int d = 5;
    cout << "\nThe sum of c and d is " << c + d;
    cout << "\n"
         << glo;
}

int main()
{
    int a = 5;
    int b = 55;
    float pi = 3.14;
    cout << "This is totorial 4.\n Here the value of a is " << a << ".\n The value of b is " << b;
    int glo = 5;
    glo = 44;
    cout << "\nThe value of pi is: " << pi;
    sum();
    cout << "\n"
         << glo;
    bool is_true = true;
    cout << "\n"
         << is_true;
    bool is_false = false;
    cout << "\n"
         << is_false;

    return 0;
}