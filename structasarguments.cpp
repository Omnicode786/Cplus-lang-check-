#include <iostream>
#include <ctime>

using namespace std;

struct car
{
    string model; 
int year;
string color;
};

void printcar(car &car){// & is added
cout<<car.model<<'\n';
cout<<car.color<<'\n';
cout<<car.year<<'\n';
cout<<&car<<'\n';

}

void paintcar(car &car,string paint){
car.color=paint;

//if i added simple car and not 
// & then uit will simply create a copty there fore nothing will happen on the other end as that is a different function
    
}

int main
(){
car car1;
car1.model="Lamborghini";
car1.color="green";
car1.year=2023;

car car2;
car2.model="Mustang";
car2.color="Blue";
car2.year=2024;


//since these were passed by value so they have different address if we want to work with the same address then we work with pass by referecnce

// cout<<&car1<<'\n';
// printcar(car1);

// printcar(car2);
// cout<<&car2<<'\n';
paintcar(car1,"Silver");
printcar(car1);
cout<<&car1<<'\n';

paintcar(car2,"Gold");
printcar(car2);
cout<<&car2<<'\n';
// now they both have same address
}
// structs are passed by value we are creating a copy basiucally
// if we do it by value