#include <iostream> 

using namespace std;


int main()
{
    for (int i = 2; i <= 100 ; i++)
    {
        int k = 0;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                k++;
            }
            
        }
        if (k == 0)
        {
            cout << i <<endl;
        }
        
        
    }
    



}