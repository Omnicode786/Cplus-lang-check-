#include <iostream>
using namespace std;

int main()
{
    int rows;
    int colunms;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter colunms: ";
    cin >> colunms;
    int arr1[rows][colunms];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colunms; j++)
        {
            cout << "arr1 [" << i << "][" << j << "] = ";
            cin >> arr1[i][j];
        }
    }

    int arr2[rows][colunms];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colunms; j++)
        {
            cout << "arr2 [" << i << "][" << j << "] ";
            cin >> arr2[i][j];
        }
    }
    int arr3[rows][colunms];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colunms; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            cout << "arr3 [" << i << "][" << j << "] = "<< arr3[i][j] << '\n';
            
        }
    }
}