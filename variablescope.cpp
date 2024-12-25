#include <iostream>

using namespace std;
// local variables = declared inside a function or a block
// Global variable - declared  outside of all functions



int mynum=5;
//if there are variables of same num in any other function then tht will be used instead of global variable
void printnum(){
    //functions cannot see variabes os other functions
int mynum =1;
cout<<mynum<<'\n';
cout<<::mynum<<'\n';
// after writing:: this will use the global varaible value this si global oprator
}


int main(){
int mynum=2;
cout<<mynum<<'\n';
cout<<::mynum<<'\n';
printnum(); 

}




