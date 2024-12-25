
#include <iostream>

using namespace std;

int main()
{
    int array[] = {44,433,4,5,3,564,54};
    int max = array[0], min = array[0],size;
    size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {

        if (max < array[i])
        {
            max = array[i];
        }
        if (min > array[i])
        {
            min = array[i];
        }
    }
    cout << max << ' ' << min << endl;

}