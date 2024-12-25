
#include <iostream>

using namespace std;



int main(){
string foods[5];
int size = sizeof(foods)/sizeof(foods[0]);
string temp;

for (int  i = 0; i < size; i++)
{
    cout<<"Enter a food tou like to have "<<i+1<<": ";


getline(cin,temp);

if (temp=="q")
{
      break;
}
else{

foods[i]=temp;
}



}
cout<<"You like the following food:\n";

for (int i = 0; !foods[i].empty(); i++)
// necause of this foods.empuyt thing we will not pruint the empty sapces
{
 cout<<foods[i]<<'\n';
}


return 0;
}