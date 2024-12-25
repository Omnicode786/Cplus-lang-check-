#include <iostream>

using namespace std;

int factorial(int number){
if (number>0)
{
    
return number*factorial(number-1);
}

else


return 1;

}

int main(){
int number;
cout<<"Enter the number you want factorial of: ";
cin>>number;
cout<<factorial(number);


}
