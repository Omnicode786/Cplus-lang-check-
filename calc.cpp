#include <iostream>

using namespace std;

int main()
{
    cout << "********Calculator**********" << '\n';

    double num1;
    double num2;
    double result;
    char op;
    cout << "Enter num1:";
    cin >> num1;

    cout << "Enter num2:";
    cin >> num2;

    cout << "Enter Operant(+ - * /)";
    cin >> op;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << result << '\n';
        break;

    case '-':
        result = num1 - num2;
        cout << result << '\n';
        break;

    case '*':
        result = num1 * num2;
        cout << result << '\n';
        break;

    case '/':
        result = num1 / num2;
        cout << result << '\n';
        break;

    default:
        cout << "Enter valid operant" << '\n';
        break;
    }

    cout << "*******************************";
}