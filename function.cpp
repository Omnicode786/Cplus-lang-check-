
#include <iostream>

using namespace std;

void happyBirthday(string name, int age)
{
    cout << "Happy Brithday to " << name << " You are now " << age << " years old\n";
    cout << "Happy Brithday to " << name << " You are now " << age << " years old\n";
    cout << "Happy Brithday to " << name << " You are now " << age << " years old\n";
    cout << "Happy Brithday to " << name << " You are now " << age << " years old\n\n";
}

int main()
{

    string name = "Muzammil";
    int age = 18;
    string name1 = "Suman";
    int age1 = 19;
    string name2 = "Affan";
    int age2 = 19;
    string name3 = "Taha";
    int age3 = 20;
    happyBirthday(name, age);
    happyBirthday(name1, age1);
    happyBirthday(name2, age2);
    happyBirthday(name3, age3);
}