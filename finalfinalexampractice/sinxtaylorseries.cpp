#include <iostream>
#include <cmath>
using namespace std;


int factorial(int n)
{
    int fact = 0;
    if (n==1 || n == 0)
    {
        return 1;
    }
    else
    {
        fact = n*factorial(n-1);
    }
    return fact;
}


int main()
{
    int terms = 0;
    cout << "Enter the number of terms you want the taylor series of: ";
    cin >> terms;
 double x;
    cout << "Enter the value of x: ";
    cin >> x;
int power = 1;
float taylor = 0;
int sign = 0;
    for (int i = 0; i < terms; i++)
    {
        if ( i % 2 == 0 )
        {
           
            sign = 1;
        }
        else
        {
            sign = -1;
        }
        
         
        taylor += (pow(x,power) / factorial(power)) * sign; 
       //best easiest is this version but a more uniform one would be power = 2*i +1 but assign this before though
        power += 2;
    }
    cout << "The value is given as : "<<taylor;


}