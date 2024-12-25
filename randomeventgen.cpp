#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));
    int randnum = (rand() % 5) + 1;

    switch (randnum)
    {
    case 1:

        cout << "You win 100 rs";

        break;

    case 2:

        cout << "You win 1000 rs";
        break;

    case 3:

        cout << "You win 10000 rs";
        break;

    case 4:

        cout << "You win 100000 rs";
        break;

    case 5:
        cout << "You win 1000000 rs";
        break;

    default:
        break;
    }
}