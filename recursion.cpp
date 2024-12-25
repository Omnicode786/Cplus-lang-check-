//recursion = a programming technue where a function invokes itself from within break a complex c
// concept into a repeatable single step

//interative vs recursice
//advantages = less code and is cleaner for sorting and searching algorithms 
// disavanages = uses more memory slower


#include <iostream>

using namespace std;

void iwalk(int steps){
for (int i = 0; i < steps; i++)
{
    cout<<"You take a step! iterative\n";
}


}

void rwalk(int steps){

if(steps>0){
    cout<<"You take a step! recursive\n";
rwalk(steps-1);

}


}


int main(){

iwalk(10);
rwalk(10);
// navigating a tree data structuere recursion best




}