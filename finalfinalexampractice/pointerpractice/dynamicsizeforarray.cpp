#include <iostream>
using namespace std;

int main()
{
    int size; 
    cout << "Enter the size of the array you want to make: ";
    cin >> size;
    int *array = new int[size]; // this will create memory for the array in the heap and dynamically in the runtime and not in the compilation time
    cout << "Enter the data of arrat: << '\n";
    for (int  i = 0; i < size; i++)
    {
        cout << "Enter data for location: "<< i <<':';
        cin >> array[i];

    }
    for (int  i = 0; i < size; i++)
    {
        cout << "The  data for location: "<< array[i] << '\n';
    }
delete[] array;



}