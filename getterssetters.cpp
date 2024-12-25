
#include <iostream>

using namespace std;


class stove{
private:
int temperature=0;
// since its public anyone can chance it
public:
stove(int temperature){

   this->temperature=temperature; 
}
int gettemperature(){
return temperature;
// adding a getter makes the private one readable but not writable;

}
void settemperature(int temperature){
    if (temperature<0)
    {
      this->temperature=0;
    }
    if (temperature>=40)
    {
      this->temperature=40;

      // now no matter how much value i give if we have this then it will be maxed out at 40
    }
    else{
this->temperature=temperature;
// now its writable
    
    
    
    
    }
}

};


int main(){
stove stove(100);
// stove.temperature=10000000;
//now the above line is not acceptable as the temperature is now private but we can change this via setter

// we have made a constructor so now we dont need the below code


//stove.settemperature(100000);




// now we cannot make it empyty

cout<<"The temperature is:"<<stove.gettemperature()<<'\n';

//Abstraction= hiding unncesssary data fropm poutside a class
// getter - function that makes a privatre agttribute readavle
// setter = fnction that makes a private attrivute writeanble





}