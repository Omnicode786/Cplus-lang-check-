#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int MAT1[3][3];
int MAT2[3][3];

for (int i = 0; i <= 2; i++)
{
    for (int j = 0; j <= 2; j++)
    {
        cout << "Enter value of MAT1["<<i<<']'<<'['<<j<<']'<<':';
        cin>>MAT1[i][j];      
    }
    for (int j = 0; j <= 2; j++)
    {
        cout << "Enter value of MAT2["<<i<<']'<<'['<<j<<']'<<':';
        cin>>MAT2[i][j];
    }
    
}
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2 ; j++)
        {
            cout<<setw(2);
            cout << MAT1[i][j];
        }
        cout << setw(5);
        for (int j = 0; j <= 2 ; j++)
        {
            cout<<setw(2);
            cout << MAT2[i][j];
        }
        cout << endl;
        
        
    }
    int MAT3[3][3];
    for (int i = 0; i <= 2; i++)
    {
        for (int j  = 0; j <= 2; j++)
        {
            MAT3[i][j] = MAT1[i][j] + MAT2[i][j];
        }
        
    }
    for (int i = 0; i <= 2 ; i++)
    {
        cout<<setw(2);
        for (int j = 0; j <= 2 ; j++)
        {
            cout<<setw(2);
            cout <<MAT3[i][j];
        }
        cout << endl;
        
        
    }
    int transpose[3][3];
       for (int i = 0; i <= 2 ; i++)
    {
        cout<<setw(2);
        for (int j = 0; j <= 2 ; j++)
        {
            
            transpose[i][j] = MAT3[j][i];
            cout <<transpose[i][j];
        }
        cout << endl;
        
        
    }
    


}