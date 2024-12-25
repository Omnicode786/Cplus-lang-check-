#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter Your age:";
    cin >> age;

    if (age >= 50)
    {
        cout << "dude for you everything is free";
    }
    // remember why we put it upward its because >= still would be same for 18 and 50
    else if (age >= 18)
    {
        cout << "Welcome to the club";
    }
    else if (age == 17)
    {
        cout << "Sorry dude youre not allowed you can come back next year store policy dude cant help it";
    }

    else
    {
        cout << "Sorry come back when youre over 18";
    }
}