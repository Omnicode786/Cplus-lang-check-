#include <iostream>
#include <ctime>

using namespace std;

void sort(int array[], int size)
{

    int temp;
    for (int i = 0; i < size - 1; i++)
    { // zize is szie-1 because we dpnt need to check for last no
        for (int j = 0; j < size - i - 1; j++)
        {
            if ((array[j] > array[j + 1]))
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {10, 1, 8, 9, 7, 6, 4, 3, 2};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array)
    {
        cout << element << " ";
    }
}