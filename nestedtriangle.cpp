#include <iostream>

using namespace std;

int main()
{

    int rows;
    int colunms;
    char symbol;

    cout << "How many rows:";
    cin >> rows;
    cout << "How many colunms:";
    cin >> colunms;
    cout << "What symbol:";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colunms; j++)
        {
            cout << symbol << ' ';
        }
        printf("\n");
    }
}