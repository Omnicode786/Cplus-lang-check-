
#include <iostream>

using namespace std;


// function te,m-plate = describes what a function looks like
// can be used to genrate as many overloaded functions
// as needed, each using different data types







int max(int x,int y){
return(x>y)?x:y;    
}
double max(double x,double y){
return(x>y)?x:y;    
}
char max(char x,char y){
return(x>y)?x:y;    
}
// change datA type to T this function teplating think of it as a  thing we dont know the thing but it will be decided after wards

// template <typename T>

//  T maxtemp(T x, T y){
// return(x>y)?x:y;    
// }
template <typename T,typename U>
  auto maxtemp(T x, U y){
 return(x>y)?x:y;    
 }

int main(){
cout<<max(1,2)<<'\n';
cout<<max(10.6,29.9)<<'\n';
cout<<max('1','2')<<'\n';
// these are3 overloaded functions as they essentially do the same task but for different data types

cout<<maxtemp(2.2,215.4)<<'\n';
cout<<maxtemp(2000,215)<<'\n';
cout<<maxtemp('50','99')<<'\n';
// in the paraemters the value should be same like double int or char value
// but theres a way
cout<<maxtemp(77,'4')<<'\n';

}