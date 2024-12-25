#include <iostream>

using namespace std;
int c = 32432;
int main()
{
    int a, b, c;
    cout << endl
         << "Enter the value of a:";
    cin >> a;
    cout << endl
         << "Enter the value of b:";
    cin >> b;
    c = a + b;
    cout << "The sum is: " << c << endl;
    cout << "The global c is: " << ::c;
    // :: this is scope resolution operator
}