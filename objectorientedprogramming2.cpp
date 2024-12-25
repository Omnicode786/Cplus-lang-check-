#include <iostream>

using namespace std;

class car{
 /* dont forget public */  public:
string make;
string model;
int year;
string color;

void accelerate(){

cout<<"You step on the gas\n";
}
void brake(){
cout<<"You step on the break\n";

}


};

int main(){
car car1;
car1.make="Honda";
car1.model="Civic RS";
car1.year=2023;
car1.color="Blue";

cout<<car1.make<<'\n'<<car1.model<<'\n'<<car1.year<<'\n'<<car1.color<<'\n';
car1.accelerate();
car1.brake();

car car2;
car2.make="Suzuki";
car2.model="Corola";
car2.year=2024;
car2.color="Black";

cout<<car2.make<<'\n'<<car2.model<<'\n'<<car2.year<<'\n'<<car2.color<<'\n';
car2.accelerate();
car2.brake();


}