#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = rand() % 20 + 1;

    do
    {
        cout << "Guess the number(1-20):";
        cin >> guess;
        tries++;
        if (guess > num)
        {
            cout << "Too high\n";
        }
        else if (guess < num)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Correct\n The number of tries was : " << tries;
        }
    } while (num != guess);
}
