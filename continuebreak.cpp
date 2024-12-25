// continue = skip current iteration
// break = break out of loop
#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        cout << i << '\n';
    }
    for (int i = 0; i <= 25; i++)
    {
        if (i == 20)
        {
            printf("Your time here is now over\n");
            break;
        }

        cout << i * i << '\n';
    }
}