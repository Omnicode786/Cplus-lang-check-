#include <iostream>

using namespace std;

class Employee;
// isme bas yad rkhna ke is employee class ko declare pehle krdena yadse ye aap keliye bhi he muzammil ni kroge to basically scne ye heke 
// jo niche apne func bnaya he uske pas access kese jayega meri jan ke tote compiler to top to bottom hi jata hena friend function jitna mrzi use krlo 
class Hrmanager
{
    public:
    void Employeecontrol(Employee &emp, int salary);
};
class Employee
{
    private:
    int empsalary;
    public:
    string name;
    int id;
    string position;
    friend void Hrmanager::Employeecontrol(Employee &emp, int salary);
    void showdetail()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<position<<endl;
        cout<<empsalary<<endl;
        
    }


};
void Hrmanager::Employeecontrol( Employee &emp,int salary) // enu tussi apna ei dost smjho
{
 emp.empsalary = salary;
}


int main()
{
    Hrmanager hr;
    Employee e1;
    e1.name = "Muzammil";
    e1.position = "HOD";
    e1.id = 67520;
    hr.Employeecontrol(e1, 450000);
    e1.showdetail();


}