// dynamic memory = memory thast is allocated after the program is already compiled and running 
// use the 'new ' operator to allocate the memory in the heap rahter than the stack

// usefull when we dont know how much memmory we will need makes our progerams more flexible 
//especiallty when accepting user inpyt
#include <iostream>

using namespace std;


int main(){
int *pNum=NULL;
pNum=new int;
*pNum =21;
cout<<pNum<<'\n';
cout<<*pNum<<'\n';
delete pNum;
// because if we dont do this we will cause a memory leak
char *pGrades=NULL;

int size;
cout<<"How many grades to enter: ";
cin>>size;

pGrades= new char[size];
for (int i = 0; i < size; i++)
{
    cout<<"Enter  Grade #:"<<i+1<<":";
    cin>>pGrades[i];
}
for (int i = 0; i < size; i++)
{
cout<<pGrades[i];
}
delete[]pGrades;







}











