#include <iostream>


using namespace std;

class Employee;

class HRmanager
{
    public:
    void Employeecontrol(Employee &emp, int salarybyuser);

};
class Employee
{
    public:
    string employeename;
    int employeeid;
    int employeesalary;
    void setdetail(string name, int id, int salary)
    {
        employeename = name;
        employeeid = id;
        employeesalary = salary;
    }
    void seedetail()
    {
        cout << "The name of the employee is: "<< employeename<<'\n';
        cout << "The id of the employee is: "<< employeeid<<'\n';
        cout << "The salary of the employee is: "<< employeesalary<<'\n';
    }

friend void HRmanager::Employeecontrol(Employee &emp, int salarybyuser);

};

void HRmanager::Employeecontrol(Employee &emp, int salarybyuser)
{
    emp.employeesalary = salarybyuser;
}



int main()
{
    HRmanager hr;
    Employee e1;
    e1.setdetail("Muzammil", 67520, 250000);
    e1.seedetail();
    hr.Employeecontrol(e1, 400000);
    e1.seedetail();

}

