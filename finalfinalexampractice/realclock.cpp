#include <iostream>
#include <windows.h>

using namespace std;
// frekiiinnnn sooooo funnn
int main()
{   int duration = 0;
int seconds = 0, minutes = 0, hours = 0;
    cout << "Enter the amount of duration: ";
    cin >> duration;
    while (duration > 0)
    {
        system("cls");

        cout << hours << "   :" << minutes << "   :" << seconds << endl;
        Sleep(1000);
        seconds++;
        if (seconds == 60)
        {
            seconds = 0;
            minutes++;
        } 
        if (minutes == 60)
        {
            minutes = 0;
            hours ++;
        }
        if (hours == 24)
        {
            hours = 0;
        }
        duration--;
    }
}