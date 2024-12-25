#include <iostream>

using namespace std;

int largestinarray(int *arr, int size)
{
    int *ptr = arr;
    int largest = *ptr;
    for (int  i = 0; i < size-1; i++)
    {
        ptr++;
        if (*ptr > largest)
        
        {
            largest = *ptr;
        }
        
    }
    return largest;
}

int main()
{
    int array[] = {33,6,443,5645,6,34,63,63,5,44};
    int size  = sizeof(array) / sizeof(array[0]);
     int large = largestinarray(array, size);
     cout << large;
     


}