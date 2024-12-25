#include <iostream>
#include <ctime>

using namespace std;


int main(){

double gpa=2.5;
//sizeof()=determines the size in byted of a variable daya type class obejects etc
    

//sizeof(double will be the same as well)
string name ="Muzammil Alam";
//size of string remain same no matter the stuff inside it is 24 byte
//string is a refrence data type
char grade = 'F';
bool student = true;
// doesnt matter true or false
char grades[] ={'A','B','C','D','F'};
string students[]={"Muzammil","Taha","Affan","Suman"};

cout<<sizeof(gpa)<<" bytes\n";
cout<<sizeof(name)<<" bytes\n";
cout<<sizeof(grade)<<" bytes\n";
cout<<sizeof(student)<<" bytes\n";
cout<<sizeof(grades)<<" bytes\n";

cout<<sizeof(grades)/sizeof(char)<<" bytes\n";
//this will give in the no of elements
cout<<sizeof(students)/sizeof(string)<<" bytes\n";
}
