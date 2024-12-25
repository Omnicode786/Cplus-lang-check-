// Employee Salary Calculation
// Define a structure Employee with the following fields:

// Employee ID (int)
// Name (string)
// Basic salary (float)
// HRA (float)
// DA (float)
// Write a function to calculate the gross salary of an employee using the formula:

// Gross Salary
// =
// Basic Salary
// +
// HRA
// +
// DA
// Gross Salary=Basic Salary+HRA+DA
// Input details for 3 employees and display their gross salaries.

#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
    float HRA;
        float DA;

};

int main()
{
    Employee E1, E2, E3;
    cout << "Enter your name: ";
    cin >> E1.name;
    cout << "Enter your salary: ";
    cin >>E1.salary;
    E1.HRA = (E1.salary)*0.2;
    E1.DA = (E1.salary)*0.1;
    float grosssalary = E1.HRA +E1.salary+ E1.DA; // dekh yar hamza meri jan ke tote kitna tax lagate hen ye log saudia walo ko bulao yar tum🥺
    
    cout << "Dear employee your DA is: "<<E1.DA<<endl;
    cout << "Dear employee your HRA is: "<<E1.HRA<<endl;
    cout << "Dear employee your Gross Salary is: "<<grosssalary<<endl;


}
