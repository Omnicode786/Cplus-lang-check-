#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;

vector<string> phonenoname;
vector<long long int> phoneno;
int totalsize=0;
int addnumber()
{
   
    
    int size;
    cout<<"How many people do you want to add:";
cin>>size;
totalsize=size;
  phonenoname.resize(totalsize + size);
    phoneno.resize(totalsize + size);
string name[size];
long long int number[size];
for (int i = 0; i < size; i++)
{
    cout<<"Enter name for position no "<<i+1<<' ';
    cin>>name[i];
    phonenoname[i]=name[i];
    cout<<"Enter phone no of "<<name[i]<<' ';
cin>>number[i];
phoneno[i]=number[i];
}
}
int shownumber(){
if (totalsize==0)
{
    cout<<"You havent entered any phone no\n";
}
else{
for (int i = 0; i < totalsize; i++)
{
 cout<<phonenoname[i]<<" :" <<"+92"<<phoneno[i]<<'\n';   
}
}
}
string findnumber(long long int phone){
    bool found = false;
    for (int i = 0; i < totalsize; i++) {
        if (phone == phoneno[i]) {
            cout << "The number +92" << phone << " belongs to " << phonenoname[i] << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "We cannot find a person with that number" << endl;
    }
    return "";
}




int main(){
int option=0;
do

{

cout<<"***********************\n";
cout<<"******Phone Book*******\n";

cout<<"1.Add new number\n";
cout<<"2.Show all numbers\n";
cout<<"3.Find a Number\n";
cout<<"4.Quit Phone book\n";
cin>>option;
if (option==1)
{
addnumber();
}
else if (option==2)
{
    shownumber();
}
else if (option==3)
{
   long long int phone;
    cout<<"Enter the phone no you want to find:";
cin>>phone;
findnumber(phone);
}


} while (option!=4);




}