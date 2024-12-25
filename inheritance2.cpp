#include <iostream>

using namespace std;

class shape{
    public:
    double area;
    double volume;
};
class cube : public shape{
public:
double side;
cube(double side){
this->side=side;
this->area=side*side*6;
this->volume=side*side*side;


}


};
class sphere : public shape{
public:
double radius;
sphere(double radius){
this->radius=radius;
this->area=4*3.14159*(radius*radius);
this->volume=(4/3.0/*dont forget the decimal*/)*3.14159*(radius*radius*radius);




}



};

int main(){
cube cube(10);
cout<<"Area :"<<cube.area<<"cm\n";
cout<<"volume :"<<cube.volume<<"cm\n";
sphere sphere(5);
cout<<"Area :"<<sphere.area<<"cm\n";
cout<<"volume :"<<sphere.volume<<"cm\n";

}


