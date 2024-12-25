// Write a program to reverse an array using two pointers start and end
#include <iostream>
using namespace std;

void reversearray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for ( int i = 0; i < size; i++)
    {
        cout << arr[i]<<endl;
    }
    
    
}

int main()
{
    int arr[] = {1,334,643,32,32,32,2,5,2,5,77};
    int size  = sizeof(arr) / sizeof(arr[0]);
    reversearray(arr,size);    
}