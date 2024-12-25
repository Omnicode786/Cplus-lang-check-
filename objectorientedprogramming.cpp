#include <iostream>

using namespace std;


//object = a collection of attributees
//and methods they can have charateristics and could perform actions can be used to mimic real world items (ex phone bokok etc)
// created from a class which acts as a "Blue print"

class human{
    public:
    // we can also assign default 
    // basically we are clonning here
    string name="Adam";
string occupation="first person";
int age=100000;
// mehtod is a function that belongs to a class

void eat(){
    cout<<"This person is eating\n";

}

void drink(){
    cout<<"This person is drinking\n";
}    

void sleep(){
    cout<<"This person is sleeping\n";
    
}

};
// dont forget the above ;
int main(){

human human1;
// human1.name="Muzammil";
// human1.occupation="Engineer";
// human1.age=18;

cout<<human1.name<<'\n'<<human1.occupation<<'\n'<<human1.age<<'\n';
human1.drink();
human1.eat();
human1.sleep();

 human human2;
// human2.name="Taha";
// human2.occupation="Engineer";
// human2.age=20;

cout<<human2.name<<'\n'<<human2.occupation<<'\n'<<human2.age<<'\n';
human2.drink();
human2.eat();
human2.sleep();

return 0;
}