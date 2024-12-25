#include <iostream>
#include <ctime>

using namespace std;

// struct = a struct that fgorup related varuiabled under one name structs
// can constain many diufferent data ttoes(strings, chatr etc) varaibles in a struct are kjnow as memebers
//memebers can be acccessed with ."Class memeber access operator"
struct students{
// the vairables in this will be memebers

string name;
double gpa;
bool enrolled;
};



int main(){

students s1;
s1.name="Muzammil";
s1.gpa=3.34;
s1.enrolled=true;

cout<<s1.name<<' ';
cout<<s1.gpa<<' ';
cout<<s1.enrolled<<'\n';

students s2;
s2.name="Ahsan";
s2.gpa=3.67;
s2.enrolled=true;

cout<<s2.name<<' ';
cout<<s2.gpa<<' ';
cout<<s2.enrolled<<'\n';

students s3;
s3.name="Taha";
s3.gpa=4.0;
s3.enrolled=true;

cout<<s3.name<<' ';
cout<<s3.gpa<<' ';
cout<<s3.enrolled<<'\n';




}

