#include <iostream>


using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i ; j--)
        {
            cout <<" ";
        }
        for (int k = 0; k <= i ; k++)
        {
                cout <<"*";
        
        
        cout << endl;
    }
    
}