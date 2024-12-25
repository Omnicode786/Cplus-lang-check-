#include <iostream>

using namespace std;
int main()
{

    double temp;
    char unit;

    cout << "*****************Temperature converter***********\n";
    cout << "F for Farhanheight\n";
    cout << "C for Celcius\n";
    cout << "What unit:";
    cin >> unit;
    if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in Farhenheight:";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temperature is:" << temp << "C\n";
    }
    else if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the temperature in Celcius:";
        cin >> temp;
        temp = (temp * 1.8) + 32.0;
        cout << "Temperature is:" << temp << "F\n";
    }
    else
    {
        cout << "Enter valid unit";
    }
}