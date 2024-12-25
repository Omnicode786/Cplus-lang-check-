#include <iostream>

using namespace std;


// overloaded contructors - muiltiple contructors w/ same name but different parametrers allows for varying argumentts when instatianting an object
class pizza{
public:

 string toping1;
 string toping2;
 pizza(string toping1){
this->toping1=toping1;
 }
pizza(string toping1,string toping2){
this->toping1=toping1;
this->toping2=toping2;

 }
pizza(){

 }

};


int main(){

pizza pizza1("pepperoni");
cout<<pizza1.toping1<<'\n';
pizza pizza2("mushroom","peppers");
cout<<pizza2.toping1<<'\n';
cout<<pizza2.toping2<<'\n';
pizza pizza3;
//  if we cratying an ovbject passing no argument we need a matching constructor
}