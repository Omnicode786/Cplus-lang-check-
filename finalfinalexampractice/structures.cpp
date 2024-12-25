#include <iostream>

using namespace std;

// Basic Student Information
// Write a program to create a structure Student with the following fields:

// Name (string)
// Roll number (int)
// Marks in 3 subjects (array of 3 floats)
// Calculate and display the total and average marks of a student.

 struct Student
{
    string name;
    int rollno;
    float marks[3];
  
};

int main()
{
    Student s1;
    s1.name = "Muzammil";
    s1.rollno = 134;
    s1.marks[0] = 80;
    s1.marks[1] = 60;
    s1.marks[2] = 70;
    cout << "The name of the student is: "<<s1.name<<endl;
    cout << "The roll no of the student is: "<<s1.rollno<<endl;
    cout << "The marks of the student os subject physics is: "<<s1.marks[0]<<endl;
    cout << "The marks of the student os subject chemistry is: "<<s1.marks[1]<<endl;
    cout << "The marks of the student os subject maths is: "<<s1.marks[2]<<endl;
    float total = s1.marks[0]+s1.marks[1]+s1.marks[2];
    float average = (total) / 3;
    cout << "total = " << total <<endl;
    cout << "average = " << average <<endl;


}