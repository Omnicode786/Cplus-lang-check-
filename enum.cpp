#include <iostream>

using namespace std;

// enums=a user defined data type tht connsiists of
// paired named integer constants great if you hve a set of potential opetions

enum DAy{ sunday=0,monday=1, tuesday = 2, wednesday=3,thursday=4,friday=5,saturday=6};

// the above number is assigned impklictely as welll

int main(){
// normally we cannot use string in switch
// string today = "sunday";


DAy today=sunday; 

switch (today)
{
case sunday:
cout<<"It is sunday\n";
    break;

case monday:
cout<<"It is monday\n";
    break;
    // the associated value can also be used
    //case 1:
//cout<<"It is monday\n";
  //  break;
case tuesday:
cout<<"It is tuesday\n";
    break;
case wednesday:
cout<<"It is wednesday\n";
    break;
case thursday:
cout<<"It is thursday\n";
    break;
    
case friday:
cout<<"It is friday\n";
    break;
    
case saturday:
cout<<"It is saturday\n";
    break;
default:
    break;
}


}