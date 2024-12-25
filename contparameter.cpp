#include <iostream>

using namespace std;

// const parameter = parameter that is effectivelty read only
// code is more secure and conveus intent
//useful for refrences and pointers
//nobody change valuw 
//&addressof

void printinfo(const string name, const int age){
// name=" ";
// age=0; this will not work

    cout<<name<<'\n'<<age<<'\n';
}

int main(){



string name =" Bro ";
int age =221;



printinfo(name,age);

return 0;



}