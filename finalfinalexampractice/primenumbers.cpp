#include <iostream> 

using namespace std;


int main()

{
    bool isprime = true;
    int num;
    cout << "Enter a number: ";
    cin >>num;
    if (num == 1 || num == 0)
    {
        cout << "It is not a prime number"<<endl;
        return 0;
    }
    
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            isprime = false;
        }
        
    }
    if(isprime)
    {
        cout <<"The entered number is  prime"<<endl;
    }
    else 
    {
        cout <<"The entered number is  not prime"<<endl;

    }
    return 0;

}