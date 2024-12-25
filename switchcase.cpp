#include <iostream>

using namespace std;

int main()
{

    char grade;

    cout << "Enter your grade:";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Congrats on the amazing score";
        break;
    case 'B':
        cout << "You did really great congrats but you can do even better I believe in you!";
        break;
    case 'C':
        cout << "Did you not study how did you manage to get such bad grades you really need to look after your studies mister";

        break;
    case 'D':
        cout << "Youre a disgrace to our family";
        break;
    case 'F':
        cout << "Get out of my house immediately!";
        break;

    default:
        cout << "I dont think that can be the correct grade are you sure";
        break;
    }
}