#include <iostream>

using namespace std;

int main()
{
    int temp;

    bool sunny = true;

    cout << "Enter temperature:\n";
    cin >> temp;
    if (temp > 0 && temp < 30)
    {
        cout << "The temperature is good";
    }
    else
    {
        cout << "The temperature is bad";
    }
    if (temp <= 0 || temp > 30)
    {
        cout << "The temperature is bad\n";
    }
    else
    {
        cout << "The temperature is good\n";
    }

    if (sunny)
    {
        cout << "It is sunny outside\n";
    }
    else
    {
        cout << "It is cloudy outside\n";
    }
    bool icecream = false;
    if (!icecream)
    {
        cout << "We dont have icecream";
    }
    else
    {
        cout << "We have icecream";
    }
}