#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] = {{555,33,54}, {22,1,3},{77,4,5}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j]<<'\t';
        }
        cout << endl;
    }
    cout <<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            for (int k = 0; k < 3-j-1; k++)
            {
                if (arr[i][k] > arr[i][k+1])
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = temp;
                }
                
            }
            
        }
        
    }
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j]<<'\t';
        }
        cout << endl;
    }
}