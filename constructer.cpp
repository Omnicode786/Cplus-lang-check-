#include <iostream>

using namespace std;


class student{
public:


string name;
int age;
double gpa;
student(string name,int age,double gpa){
// cpontructor is like a function in a class


this->name=name;
this->age=age;
this->gpa=gpa;
// we only need the this keyword if the attribute names of the variable is same as the arguments


}

};

//c onstructor = special method that is automatically called when an object
// nis instantiated  useful for assigning values to attrinutes as arguments

int main(){


student s1("muzammil",18,4.0);
student s2("taha",20,4.0);
student s3("Ahsan",19,4.0);

cout<<s1.name<<'\n';
cout<<s1.age<<'\n';

cout<<s1.gpa<<'\n';

cout<<s2.name<<'\n';
cout<<s2.age<<'\n';
cout<<s2.gpa<<'\n';

cout<<s3.name<<'\n';
cout<<s3.age<<'\n';
cout<<s3.gpa<<'\n';

}



















