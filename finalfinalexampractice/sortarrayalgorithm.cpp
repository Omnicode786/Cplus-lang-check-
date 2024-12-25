#include <iostream>

using namespace std;

int  sortarray(int arr[],int size)
{
    for (int i = 0; i < size - 1; i++) // size - i because array starts from 0
    {
        for (int j = 0; j < size - i -1; j++) // look basically when the inner loop will continue first time and for every time the last element will always be sorted like it will go through each element and sort out them so the last element 
        // will always be sorted so no next time when the loop runs due to i we don't need to check for that last element get it!

        {
            if (arr[j] > arr[j+1]) // this will check if the current element that j is indicating to is larger than the j+1 meaning the element next to it and then if yes then they both are swapped if not then that particular element stays there and gets swapped with the next one if the condition aggrees in the next lloop
            {
             int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;          
            }
            // tuuu tooo gya beteeee *insert meme here*

        }
        
    }
    
}


int main()
{
    int array[] = {1,4,6,3,7,8,33,43,31,22};
    int size = sizeof(array) / sizeof(array[0]);
    sortarray(array, size);
for (int i = 0; i < size; i++)
{
    cout << array[i] <<endl;
}


}