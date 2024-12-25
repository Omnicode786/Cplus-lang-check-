#include <iostream>

using namespace std;

int main()
{

    string name;
    while (name.empty())
    {
        cout << "Enter your name:";
        getline(cin, name);
    }
    cout << "Hello " << name;
    while (1)
    {
        cout << "Help!";
    }
}
