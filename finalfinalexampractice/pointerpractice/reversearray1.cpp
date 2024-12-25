#include <iostream>

using namespace std;

int main()
{
    int array[] = {1,3,4,5,6,7,5,44};
    int size = sizeof(array) / sizeof (array[0]);
    int left;
    int right = size - 1;
    for ( left = 0; left < right; left++, right--)
    {
        
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

    }
    
    
    
    
    for (int i = 0; i < size; i++)
    {
        cout << array[i]<<endl;
    }
    


}