#include <iostream>
using namespace std;

struct Address
{
    int houseno;
    string area;
    string country;
};

struct Employee
{
    string name;
    int id;
    int salary;
    Address address;
};

int main()
{
    Employee e1, e2, e3;
    cout << "#### Employee data ####" << '\n';
    cout <<"Enter your name: ";
    cin >>e1.name;
    cout << "Enter your id no: ";
    cin >>e1.id;
    cout << "Enter your salary: ";
    cin >> e1.salary;
    cout << "Enter your houseno: ";
    cin >> e1.address.houseno;
    cout << "Enter your area: ";
    cin >> e1.address.area;
    cout << "Enter your country: ";
    cin >> e1.address.country;
    cout << e1.name<<endl;
    cout <<e1.id<<endl;
    cout << e1.salary<<endl;
    cout <<e1.address.houseno<<endl;
    cout <<e1.address.area<<endl;
    cout <<e1.address.country<<endl;
}

