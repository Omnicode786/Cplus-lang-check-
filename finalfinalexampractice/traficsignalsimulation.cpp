#include <iostream>
#include <windows.h>

using namespace std;
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
int main()
{
    // fuck around until you actually solve it yourself bitch
    float totalduration = 0, red = 0, yellow = 0, green = 0;
    cout << "Enter the number of cycles of simulation: ";
    cin >> totalduration;
    cout << "Enter red light duration: ";
    cin >> red;
    cout << "Enter yellow light duration: ";
    cin >> yellow;
    cout << "Enter green light duration: ";
    cin >> green;
    for (int i = 0; i < totalduration; i++)
    {
        system("cls");
            cout << RED << "red" << endl;
            Sleep(red*1000);
            system("cls");
            cout << YELLOW << "yellow" << endl;
            Sleep(yellow*1000);
            system("cls");
            cout << GREEN << "green" << endl << "\033[030m" ;
            Sleep(green*1000);
            system("cls");
            
            
            
    }

}