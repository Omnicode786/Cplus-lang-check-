#include <iostream>

using namespace std;
int main()
{

    string name;
    cout << "Enter you name:";
    getline(cin, name);
    if (name.length() > 12)
    {
        cout << "Your name can't be 12 characters long" << '\n';
    }
    else if (name.empty())
    {
        cout << "You dint enter any name" << '\n';
    }

    else
    {
        cout << "Welcome " << name << '\n';
    }

    name.append("@gmail.com");
    cout << "Your username is now " << name << '\n';

    cout << name.at(0);

    name.insert(0, "#");
    // index,what we would like to insert
    cout << "\nWelcome " << name << '\n';
    cout << name.find('c') << '\n';

    name.erase(0, 4);
    cout << "Welcome " << name << '\n';
    // bggining index then the ending index will be erased
    name.clear();

    cout << "Welcome " << name << '\n';
}
