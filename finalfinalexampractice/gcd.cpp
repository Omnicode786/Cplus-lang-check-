// Greatesst common divisor

#include <iostream>

using namespace std;

int main()
{
    int largestnum, num1, num2;

    cout << "Enter the number 1:";
    cin>>num1;
    cout << "Enter the number 2:";
    cin>>num2;
    if (num1 > num2)
    {
        largestnum =num1;
    }
    else
    {
        largestnum = num2;
    }
    int gcd;
    for (int i = 1; i <= largestnum; i++)
    {
        if (num1%i== 0 && (num2 % i) == 0)
        {
            gcd = i;
        }
        
    }
    cout << gcd << endl;
    
}