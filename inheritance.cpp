#include <iostream>

using namespace std;

//inheritance= a class can recieve ttributes andmethods from another class children classes inherit from a parent class
//helps to reuse similar code within multiple classes
class animal{
public:

bool alive=true;
void eat(){

cout<<"This animal is eating\n";
}


};
class Dog : public animal{
public:
void bark(){

    cout<<"The dog goes woof\n";
}
};
// this is used to inhetrit
class cat :public animal{
    public:
void meaw(){
    cout<<"The cat goes meaow";
}
};
int main(){
Dog dog;
cout<<dog.alive<<'\n';
dog.eat();
dog.bark();
cat cat;
cat.meaw();

cout<<'\n'<<cat.alive<<'\n';

// cat.bark;
// this will not work
}