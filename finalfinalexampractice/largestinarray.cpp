#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,32,4,-432432,3,3,2,34,4,32,334, 0};
    int size = sizeof (arr) / sizeof (arr[0]);
    
    int max = arr[0];// becuase of this  this will work for all values if initialized to be 0 then will not work for -ve calues
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << '\t' << max <<endl;
    
}