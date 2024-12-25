#include <iostream>

using namespace std;

double getTotal(double prices[],int size){

double total =0;

 for (int i = 0; i<size/*i < sizeof(prices)/sizeof(prices[0])*/; i++)
{
   total =total +prices[i];
}
return total;

// this above method will not work because
// when we pass an array to a function it decays as a pointer
// because of this the function does not know the actual size of the array
// this can be countered by giving another parameter just for the size


}

int main(){

double prices[]={5000,49.99,24.08,55,88};
int size =sizeof(prices)/sizeof(prices[0]);


double total =getTotal(prices,size);
cout<<total<<"$";



}