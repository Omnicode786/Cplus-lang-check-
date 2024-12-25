#include <iostream>

using namespace std;


/*Luhn Algorithm
1. Double every second digit from right to left
If doubled number is 2 digits, split them
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisble by 10, # is valid*/

int getdigit(const int number){

return number%10 +(number/10%10);
    
}
int sumoddDigit(const string cardnumber){


int sum=0;
for (int i = cardnumber.size()-1; i >=0; i-=2)
{
    sum+=getdigit((cardnumber[i]-'0'));
// zero is used as ascii 0   =48

}  
return sum; 
}      
int sumevendigit(string cardnumber){

int sum=0;
for (int i = cardnumber.size()-2; i >=0; i-=2)
{
    sum+=getdigit((cardnumber[i]-'0')*2);
// zero is used as ascii 0=48

}



return sum;
}



int main(){


string cardnumber;
int result =0;
cout<<"Enter a card no: ";
cin>>cardnumber;

result = sumevendigit(cardnumber)+sumoddDigit(cardnumber);

if (result%10==0)
{
    cout<<"Card no"<<cardnumber<<" is valid\n";
}
else{
     cout<<"Card no"<<cardnumber<<" is not valid\n";
}

}