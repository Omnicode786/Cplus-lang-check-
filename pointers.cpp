#include<iostream>

using namespace std;

int main(){
//pointers = variable that stores a memory  address of
// another variable sometimes its easier to work with an address
//&address of operator
//* dereference operator



string name="Bro";

int age=221;
string *pname =&name;
cout<<*pname;
int *page=&age;
cout<<*page;

string freepizza[5]={"piizza","pizza","pizza","pizza","pizza"};
string *pfreepizza =/*&*/freepizza;
// array is alreadyu an address so we dont need to use the address operaot
cout<<*pfreepizza;


}
