#include <iostream>

using namespace std;

// call by value
void swap(string x,string y){

// wehne we pass by value to a function 
//it basically creates a copy of the variable which has a different memory location
//so swaping them would be not easy
string temp;
temp=x;
x=y;
y=temp;
cout<<&x<<'\n';
cout<<&y<<'\n';


//here we are passing by value sow were switching the two copies
// although they are swapping however the memory location is different it is simply a copy


}

void swap2(string &x,string &y){

    string temp;
temp=x;
x=y;
y=temp;
cout<<&x<<'\n';
cout<<&y<<'\n';
//look at the addresses here they are the same

}


int main(){

string x="1";
string y="2";


cout<<&x<<'\n'<<&y<<'\n';
swap(x,y);


string w="3";
string z="4";
cout<<&x<<'\n'<<&y<<'\n';

swap2(w,z);


}